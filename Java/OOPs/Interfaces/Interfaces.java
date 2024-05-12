interface Bicycle { 
            void apply brake ( int decrement ); 
            void  speed up ( int increment );
            }

class Avon cycle implements Bicycle {
            int speed = 7 ; 
             void apply brake ( int decrement ) {
                     speed = speed - decrement ;
                         }
        void speedup ( int increment ){ 
                 speed = speed + increment ; 
                    }