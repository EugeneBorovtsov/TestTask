#include <iostream>
#include "src/vehiclefactory.h"

using namespace std;

int main(int argc, char* argv[]) {
	for (int argn = 1; argn < argc; argn++) {		//Обработка всех поступивших на вход параметров (кроме нулевого, содержащего название файла)
		try {
			int vehicleTypeIndex = stoi(argv[argn]);	//Преобразование строки к целочисленному типу (invalid_argument если преобразование невозможно)
			VehicleFactory::VehicleType vehicleType = VehicleFactory::intToVehicleType(vehicleTypeIndex);

			if (vehicleType == VehicleFactory::VehicleType::UNDEFINED)
				throw std::invalid_argument("НЕИЗВЕСТНЫЙ ТИП ТРАНСПОРТА");
				//throw std::out_of_range("ИНДЕКС НЕ ПРИНАДЛЕЖИТ ПЕРЕЧИСЛЕНИЮ");

			auto vehicle = VehicleFactory::createVehicle(vehicleType);
			vehicle->showInfo();
		}
		catch (const std::invalid_argument e) {
			cout << "НЕИЗВЕСТНЫЙ ТИП ТРАНСПОРТА" << endl;
		}
		catch (const std::out_of_range e) {		//Дополнительный оброботчик (неиспользуется из-за противоречий с ТЗ)
			cout << e.what() << endl;
		}
	}	
	return 0;
}
