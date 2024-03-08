
/*
 * SEVEN_SEGMENT_Interface.h
 *
 * Created: 3/8/2024 11:45:35 AM
 *  Author: Dell
 */ 
/******************************** section: macros *******************************/
#define COMMON_CATHODE 0
#define COMMON_ANODE 1

/******************************** section: APIs prototypes *******************************/
void seven_segment_init();

void seven_segment_1_enable();
void seven_segment_2_enable();
void seven_segment_3_enable();
void seven_segment_4_enable();

void seven_segment_write_one();
void seven_segment_write_two();
void seven_segment_write_three();
void seven_segment_write_four();
void seven_segment_write_five();
void seven_segment_write_six();
void seven_segment_write_seven();
void seven_segment_write_eight();
void seven_segment_write_nine();

