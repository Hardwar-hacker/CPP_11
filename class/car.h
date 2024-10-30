#pragma once

class car {
        private :
                float fuel;
                float speed;
                int passen;
        public :
		Car();
		~Car();
                void fillfuel(float amount);
                void Accelerete();
                void brake();
		void Addpassen(int count);
		void Dashboard();
};
