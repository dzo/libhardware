#ifdef __cplusplus
extern "C"  {
#endif

int msm_mixer_count();
int msm_mixer_open(const char *name,int card);
int msm_mixer_close();
int msm_get_device(const char *name);
int msm_en_device(int dev_id,int set);
int msm_route_stream(int dir, int dec_id, int dev_id, int set);
int msm_route_voice(int tx,int rx,int set);
int msm_set_volume(int dec_id, int vol);
int msm_get_device_class(int device_id);
int msm_get_device_capability(int device_id);
const char **msm_get_device_list();
int msm_get_device_count();
int msm_start_voice();
int msm_end_voice();
int msm_set_voice_tx_mute(int mute);
int msm_set_voice_rx_vol(int volume);
int msm_set_device_volume(int dev_id,int volume);
int msm_reset_all_device();

#ifdef __cplusplus
}
#endif
