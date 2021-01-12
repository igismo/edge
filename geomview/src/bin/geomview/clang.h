void gv_setenv(char * a1, char * a2);
void gv_input_translator(char * a1, char * a2);
void gv_emodule_run(char * a1);
void gv_emodule_isrunning(char * a1);
void gv_command(char * a1, char * a2);
void gv_sleep_for(float a1);
float gv_sleep_until(float a1);
void gv_set_clock(float a1);
void gv_clock();
void gv_echo(LList * a1);
void gv_emodule_transmit(char * a1, LList * a2);
int gv_load(char * a1, char * a2);
void gv_hdelete(char * a1, char * a2);
void gv_name_object(int a1, char * a2);
void gv_update_draw(int a1, float a2);
void gv_draw(int a1);
void gv_update(float a1);
void gv_redraw(int a1);
void gv_freeze(int a1, int a2);
void gv_xform_set(int a1, TransformStruct * a2);
void gv_xform(int a1, TransformStruct * a2);
void gv_xform_incr(int a1, TransformStruct * a2);
int gv_new_camera(char * a1, CameraStruct * a2);
int gv_camera(char * a1, CameraStruct * a2);
void gv_camera_reset(int a1);
int gv_new_alien(char * a1, GeomStruct * a2);
int gv_new_geometry(char * a1, GeomStruct * a2);
void gv_geometry(char * a1, GeomStruct * a2);
void gv_replace_geometry(char * a1, int *a2, int a2n, GeomStruct * a3);
void gv_copy(int a1, char * a2);
void gv_delete(int a1);
void gv_scene(int a1, GeomStruct * a2);
void gv_winenter(int a1);
void gv_merge_ap(int a1, ApStruct * a2);
void gv_dice(int a1, int a2);
void gv_bbox_draw(int a1, int a2);
void gv_camera_draw(int a1, int a2);
void gv_evert(int a1, int a2);
void gv_soft_shader(int a1, int a2);
LList  * gv_stereowin(int a1, int a2, int a3);
void gv_space(int a1);
void gv_hmodel(int a1, int a2);
void gv_inhibit_warning(char * a1);
void gv_hsphere_draw(int a1, int a2);
void gv_pickable(int a1, int a2);
void gv_normalization(int a1, int a2);
void gv_lines_closer(int a1, float a2);
void gv_backcolor(int a1, float a2, float a3, float a4);
void gv_bbox_color(int a1, float a2, float a3, float a4);
void gv_window(int a1, WindowStruct * a2);
void gv_merge_baseap(ApStruct * a1);
void gv_exit();
void gv_set_motionscale(float a1);
void gv_set_conformal_refine(float a1, int a2, int a3);
void gv_write_comments(char * a1, int a2, int *a3, int a3n);
void gv_event_mode(char * a1);
void gv_pick_invisible(int a1);
void gv_rawevent(int a1, int a2, int a3, int a4, long a5);
int gv_rawpick(int a1, int a2, int a3);
void gv_pick(int a1, int a2, float *a3, int a3n, float *a4, int a4n, float *a5, int a5n, float *a6, int a6n, int *a7, int a7n, int a8, int *a9, int a9n, int a10);
void gv_event_keys(int a1);
void gv_event_pick(int a1);
void gv_dither(int a1, int a2);
void gv_ui_html_browser(char * a1);
void gv_ui_pdf_viewer(char * a1);
void gv_shell(char * a1);
void gv_write_sexpr(char * a1, LObject * a2);
void gv_write_handle(char * a1, char * a2, char * a3);
void gv_dump_handles();
void gv_dump_pools();
char * gv_geomview_version();
void gv_rib_display(int a1, char * a2);
void gv_rib_snapshot(int a1, char * a2);
LList  * gv_ND_axes(char * a1, char * a2, int a3, int a4, int a5, int a6);
LList  * gv_dimension(int a1);
TmNStruct * gv_ND_xform(int a1, TmNStruct * a2);
TmNStruct * gv_ND_xform_set(int a1, TmNStruct * a2);
TmNStruct * gv_ND_xform_get(int a1, int a2);
LList  * gv_ND_color(int a1, LList  * a2);
void gv_zoom(int a1, float a2);
void gv_ezoom(int a1, float a2);
void gv_scale(int a1, float a2, float a3, float a4);
void gv_escale(int a1, float a2);
char * gv_real_id(char * a1);
void gv_transform(int a1, int a2, int a3, int a4, float a5, float a6, float a7, float a8, int a9);
void gv_transform_incr(int a1, int a2, int a3, int a4, float a5, float a6, float a7, float a8, int a9);
void gv_transform_set(int a1, int a2, int a3, int a4, float a5, float a6, float a7);
void gv_position(int a1, int a2);
void gv_position_at(int a1, int a2, char * a3);
void gv_position_toward(int a1, int a2, char * a3);
void gv_new_center(int a1);
void gv_new_reset();
LList  * gv_look_encompass_size(float a1, float a2, float a3, float a4);
void gv_look_encompass(int a1, int a2);
void gv_look_toward(int a1, int a2, char * a3);
void gv_look(int a1, int a2);
void gv_look_recenter(int a1, int a2);
void gv_emodule_clear();
void gv_cursor_still(int a1);
void gv_cursor_twitch(int a1);
void gv_ap_override(int a1);
void gv_set_load_path(LList  * a1);
LList  * gv_load_path(LList  * a1);
void gv_set_emodule_path(LList  * a1);
LList  * gv_rehash_emodule_path();
LList  * gv_emodule_path();
char * gv_emodule_defined(char * a1);
LList  * gv_all(char * a1, char * a2);
void gv_camera_prop(GeomStruct * a1, int a2);
void gv_write(char * a1, char * a2, LObject * a3, int a4);
int gv_snapshot(int a1, char * a2, char * a3, int a4, int a5);
char * gv_bgimagefile(int a1, char * a2);
void gv_processevents();
void gv_ui_motion(int a1, int a2);
void gv_ui_cam_focus(int a1);
void gv_ui_target(int a1, int a2);
void gv_ui_center(int a1);
void gv_ui_center_origin(int a1);
void gv_ui_panel(char * a1, int a2, WindowStruct * a3);
void gv_ui_freeze(int a1);
void gv_ui_emodule_define(char * a1, char * a2);
void gv_emodule_sort();
void gv_ui_emodule_start(char * a1);