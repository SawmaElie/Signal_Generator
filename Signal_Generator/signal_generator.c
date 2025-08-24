#include "signal_generator.h"
#include "math.h"

#define PI 3.14

SineWaveParams sin_wave;

void sine_wave(SineWaveParams *p) {
		p->x = p->x + p->period / p->num_points;
	
    float angle = (2 * PI * p->x) / p->period;
   
    float sine_value = p->amplitude * sin(angle);
		
		
//	
//		if(params->x > params->period * params->num_points)
//			params->x = 0;
//    
		*(p->val) = sine_value;
    
}

/*float square_wave(float period, float amplitude, float duty_cycle, int x, float *square){
	
	int steps = (int)(period * 100);
	
	int high_time = steps * (duty_cycle/100.0);
	
	if((x % steps < high_time)){
		
		*square = amplitude;
		
	}else{
		
		*square = 0.0;
	}
}*/

