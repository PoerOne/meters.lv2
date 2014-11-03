// generated by lv2ttl2c from
// http://gareus.org/oss/lv2/meters#TPnRMSstereo

static const uint32_t dsp_descriptor_id = 56;
static const uint32_t gui_descriptor_id = 0;
static const char *plugin_human_id = "True-Peak and RMS Meter (Stereo)";

const struct LV2Port ports[17] = {
  { "control", ATOM_IN, nan},
  { "unused1", CONTROL_IN, 1.000000},
  { "reset", CONTROL_IN, 0.000000},
  { "blkcnt", CONTROL_OUT, nan},
  { "in1", AUDIO_IN, nan},
  { "out1", AUDIO_OUT, nan},
  { "dBTP_m1", CONTROL_OUT, nan},
  { "dBTP_p1", CONTROL_OUT, nan},
  { "dBRMS_m1", CONTROL_OUT, nan},
  { "dBRMS_p1", CONTROL_OUT, nan},
  { "unused2", CONTROL_OUT, nan},
  { "in2", AUDIO_IN, nan},
  { "out2", AUDIO_OUT, nan},
  { "dBTP_m2", CONTROL_OUT, nan},
  { "dBTP_p2", CONTROL_OUT, nan},
  { "dBRMS_m2", CONTROL_OUT, nan},
  { "dBFS_p2", CONTROL_OUT, nan},
};

static const uint32_t nports_total=17;
static const uint32_t nports_audio_in=2;
static const uint32_t nports_audio_out=2;
static const uint32_t nports_midi_in=0;
static const uint32_t nports_midi_out=0;
static const uint32_t nports_atom_in=1;
static const uint32_t nports_atom_out=0;
static const uint32_t nports_ctrl=12;
static const uint32_t nports_ctrl_in=2;
static const uint32_t nports_ctrl_out=10;
static const uint32_t min_atom_bufsiz=8192;
static const bool     send_time_info=true;
