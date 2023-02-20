#include <iostream>
#include <vector>

int BUILDING_TYPES_COUNT = 3;
int ROOM_TYPES_COUNT = 5;

enum Builging_type { GARAGE = 1, BARN, BATHHOUSE };

enum Room_type { BEDROOM = 1, KITCHEN, CHILDRENS_ROOM, LIVING_ROOM, BATHROOM };

struct Room {
  Room_type type;
  float square = .0f;
};

struct Floor {
  float ceiling_height = .0f;
  std::vector<Room> rooms;
};

struct Building {
  Builging_type type;
  float square = .0f;
  bool chimney;
  std::vector<Floor> floors;
};

struct Land_plot {
  int id;
  float square = .0f;

  struct House {
    bool chimney = false;
    std::vector<Floor> floor;
  } house;

  struct Garage {
    bool enable = false;
    float square = .0f;
  } garage;

  struct Barn {
    bool enable = false;
    float square = .0f;
  } barn;

  struct Bathhouse {
    bool enable = false;
    float square = .0f;
    bool chimney = false;
  } bathhouse;
};

Land_plot fill_Land_plot();
Floor fill_Floor();
void fill_House(Land_plot &plot);
void fill_Garage(Land_plot &plot);
void fill_Barn(Land_plot &plot);
void fill_Bathhouse(Land_plot &plot);

void get_percent_of_total_area(std::vector<Land_plot> &village);

int main() {
  std::cout << "21.2 Village data model." << std::endl << std::endl;
  int N;
  std::cout << "Enter the number of plots in the village: ";
  std::cin >> N;
  std::vector<Land_plot> Village;

  for (int i = 1; i <= N; ++i) {
    std::cout << "Fill " << i << " land plot in the village: " << std::endl
              << std::endl;
    Village.push_back(fill_Land_plot());
  }

  get_percent_of_total_area(Village);

  return 0;
}

Floor fill_Floor() {
  Floor floor;
  std::cout << "Enter ceiling height: ";
  std::cin >> floor.ceiling_height;

  std::cout << "Enter count of rooms: ";
  int room_count;
  std::cin >> room_count;
  while (room_count <= 0) {
    std::cout << "Incorrect value. Please, try again: ";
    std::cin >> room_count;
  }
  
  for (int i = 1; i <= room_count; ++i) {
    std::cout << "Choose one of the types of rooms:  " << std::endl;
    std::cout << BEDROOM << ". Bedroom;" << std::endl;
    std::cout << KITCHEN << ". Kitchen;" << std::endl;
    std::cout << CHILDRENS_ROOM << ". Childrens room;" << std::endl;
    std::cout << LIVING_ROOM << ". Living room;" << std::endl;
    std::cout << BATHROOM << ". Bathroom;" << std::endl;

    int room_type;
    std::cin >> room_type;
    while (room_type < 1 || room_type > ROOM_TYPES_COUNT) {
      std::cout << "Incorrect. Try again : ";
      std::cin >> room_type;
    };

    std::cout << "Enter the area of this room: ";
    Room currentRoom;
    std::cin >> currentRoom.square; 
    while (currentRoom.square <= 0) {
    std::cout << "Incorrect value. Please, try again: ";
    std::cin >> currentRoom.square;
    }
    
    switch (room_type) {
      case BEDROOM:
        currentRoom.type = BEDROOM;
        break;
      case KITCHEN:
        currentRoom.type = KITCHEN;
        break;
      case CHILDRENS_ROOM:
        currentRoom.type = CHILDRENS_ROOM;
        break;
      case LIVING_ROOM:
        currentRoom.type = LIVING_ROOM;
        break;
      case BATHROOM:
        currentRoom.type = BATHROOM;
        break;
    }
    floor.rooms.push_back(currentRoom);
  }
  return floor;
}

void fill_House(Land_plot &plot) {
  std::cout << "Does your house have chimney? (y/n): ";
  std::string answer;
  std::cin >> answer;
  if (answer == "y")
    plot.house.chimney = true;

  std::cout << "How many floors on your house? ";
  int floorCount;
  std::cin >> floorCount;
  while (floorCount <= 0) {
    std::cout << "Incorrect value. Please, try again: ";
    std::cin >> floorCount;
  }

  for (int i = 1; i <= floorCount; ++i) {
    std::cout << "Fill " << i << " floor of " << floorCount << ": "
              << std::endl;
    plot.house.floor.push_back(fill_Floor());
  }
};

Land_plot fill_Land_plot() {
  Land_plot Land_plot;
  std::cout << "Enter unique number of your land plot: ";
  std::cin >> Land_plot.id;
  std::cout << "Enter square of your land plot: ";
  std::cin >> Land_plot.square;

  fill_House(Land_plot);

  bool next = false;
  do {
    std::cout << "Do you have some buildings? (y/n): ";
    std::string answer;
    std::cin >> answer;
    if (answer == "y") {
      std::cout << "Choose one of this:" << std::endl;
      std::cout << "0. Finish filling this land plot. (exit filling)"
                << std::endl;
      std::cout << GARAGE << ". Garage;" << std::endl;
      std::cout << BARN << ". Barn;" << std::endl;
      std::cout << BATHHOUSE << ". Bathhouse." << std::endl;
      int building_type;
      std::cin >> building_type;
      while (building_type < 0 || building_type > BUILDING_TYPES_COUNT) {
        std::cout << "Incorrect. Try again : ";
        std::cin >> building_type;
      }

      switch (building_type) {
      case GARAGE:
        fill_Garage(Land_plot);
        break;
      case BARN:
        fill_Barn(Land_plot);
        break;
      case BATHHOUSE:
        fill_Bathhouse(Land_plot);
        break;
      case 0:
        next = true;
        break;
      }
    } else
      next = true;
  } while (!next);

  return Land_plot;
};

void fill_Garage(Land_plot &plot) {
  plot.garage.enable = true;
  std::cout << "Enter the area of your garage: ";
  std::cin >> plot.garage.square;

  while (plot.garage.square <= 0) {
    std::cout << "Incorrect value. Please, try again: ";
    std::cin >> plot.garage.square;
  };
  std::cout << "The area of your garage was added." << std::endl;
}

void fill_Barn(Land_plot &plot) {
  plot.barn.enable = true;

  std::cout << "Enter the area of your barn: ";
  std::cin >> plot.barn.square;
  while (plot.barn.square <= 0) {
    std::cout << "Incorrect value. Please, try again: ";
    std::cin >> plot.barn.square;
  };
  std::cout << "The area of your barn was added." << std::endl;
}

void fill_Bathhouse(Land_plot &plot) {
  plot.bathhouse.enable = true;

  std::cout << "Enter the area of your bathhouse: ";
  std::cin >> plot.bathhouse.square;
  while (plot.bathhouse.square <= 0) {
    std::cout << "Incorrect value. Please, try again: ";
    std::cin >> plot.bathhouse.square;
  };
  std::cout << "The area of your bathhouse was added." << std::endl
            << std::endl;

  std::cout << "Does you bathhouse has chimney? (y/n): ";
  std::string answer;
  std::cin >> answer;
  if (answer == "y")
    plot.bathhouse.chimney = true;
};

void get_percent_of_total_area(std::vector<Land_plot> &village) {
  float total_area = .0f;
  float total_square_of_buildings = .0f;
  float total_square_of_house = 0;

  for (std::vector<Land_plot>::iterator it = village.begin();
       it != village.end(); ++it) {
    total_area += it->square;
    if (it->garage.enable)
      total_square_of_buildings += it->garage.square;
    if (it->barn.enable)
      total_square_of_buildings += it->barn.square;
    if (it->bathhouse.enable)
      total_square_of_buildings += it->bathhouse.square;

    //площадь дома равна сумме площадей комнат первого этажа:
    int total_Rooms_first_floor = it->house.floor[0].rooms.size();
    for (int i = 0; i < total_Rooms_first_floor; ++i) {
      switch (it->house.floor[0].rooms[i].type) {
      case BEDROOM:
        total_square_of_house += it->house.floor[0].rooms[i].square;
        break;
      case KITCHEN:
        total_square_of_house += it->house.floor[0].rooms[i].square;
        break;
      case CHILDRENS_ROOM:
        total_square_of_house += it->house.floor[0].rooms[i].square;
        break;
      case LIVING_ROOM:
        total_square_of_house += it->house.floor[0].rooms[i].square;
        break;
      case BATHROOM:
        total_square_of_house += it->house.floor[0].rooms[i].square;
        break;
      }
      total_square_of_buildings += total_square_of_house;
    }
  }
  std::cout << "Total area of village =  " << total_area << std::endl;
  std::cout << "Total area of buildings = " << total_square_of_buildings;
  std::cout << std::endl;
  std::cout << "Percentage of land occupied by buildings to the total area ";
  std::cout << "of the entire village = ";
  std::cout << total_square_of_buildings * 100.0f / total_area;
};