#ifndef __AITALK_SEND_H__
#define __AITALK_SEND_H__

extern char *aitalk_send_play_url(const music_info *music);
extern char *aitalk_send_pause(const char *url);
extern char *aitalk_send_resume(const char *url);
extern char *aitalk_send_stop_music(const char *url);
extern char *aitalk_send_play_music(const char *url);
extern char *aitalk_send_previous_music(const char *url);
extern char *aitalk_send_next_music(const char *url);
extern char *aitalk_send_set_volume(const char *url);

extern int ai_aitalk_send(char *data);
extern char *ai_aitalk_receive(void);
extern int ai_aitalk_send_init(void);
extern int ai_aitalk_send_destroy(void);
extern int ai_aitalk_handler_wait(void);

#endif /* __MOZART_AITALK_JSON_H__ */
