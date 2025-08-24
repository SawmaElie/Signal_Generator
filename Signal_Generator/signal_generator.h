#ifndef __SIGNAL_GENERATOR__
#define __SIGNAL_GENERATOR__


typedef struct {
	float period;
	float amplitude;
	int num_points;
	float x;
	float *val;
} SineWaveParams;

void sine_wave(SineWaveParams *params);

extern SineWaveParams sin_wave;

extern float sine_value;


//float square_wave(float period, float amplitude, float duty_cycle, int x, float *square);

#endif
