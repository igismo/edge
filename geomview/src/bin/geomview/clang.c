void gv_setenv(char * a1, char * a2)
{
  LObject *val = LEvalFunc("setenv",
			   LSTRING, a1,
			   LSTRING, a2,
			   LEND);
  LFree(val);
}

void gv_input_translator(char * a1, char * a2)
{
  LObject *val = LEvalFunc("input-translator",
			   LSTRING, a1,
			   LSTRING, a2,
			   LEND);
  LFree(val);
}

void gv_emodule_run(char * a1)
{
  LObject *val = LEvalFunc("emodule-run",
			   LSTRINGS, a1,
			   LEND);
  LFree(val);
}

void gv_emodule_isrunning(char * a1)
{
  LObject *val = LEvalFunc("emodule-isrunning",
			   LSTRING, a1,
			   LEND);
  LFree(val);
}

void gv_command(char * a1, char * a2)
{
  LObject *val = LEvalFunc("command",
			   LSTRING, a1,
			   LSTRING, a2,
			   LEND);
  LFree(val);
}

void gv_sleep_for(float a1)
{
  LObject *val = LEvalFunc("sleep-for",
			   LFLOAT, a1,
			   LEND);
  LFree(val);
}

float gv_sleep_until(float a1)
{
  LObject *val = LEvalFunc("sleep-until",
			   LFLOAT, a1,
			   LEND);
  float retval;
  LFROMOBJ(LFLOAT)(val, &retval);
  LFree(val);
  return retval;
}

void gv_set_clock(float a1)
{
  LObject *val = LEvalFunc("set-clock",
			   LFLOAT, a1,
			   LEND);
  LFree(val);
}

void gv_clock()
{
  LObject *val = LEvalFunc("clock",
			   LEND);
  LFree(val);
}

void gv_echo(LList * a1)
{
  LObject *val = LEvalFunc("echo",
			   LREST, a1,
			   LEND);
  LFree(val);
}

void gv_emodule_transmit(char * a1, LList * a2)
{
  LObject *val = LEvalFunc("emodule-transmit",
			   LSTRING, a1,
			   LREST, a2,
			   LEND);
  LFree(val);
}

int gv_load(char * a1, char * a2)
{
  LObject *val = LEvalFunc("load",
			   LSTRING, a1,
			   LSTRING, a2,
			   LEND);
  int retval;
  LFROMOBJ(LINT)(val, &retval);
  LFree(val);
  return retval;
}

void gv_hdelete(char * a1, char * a2)
{
  LObject *val = LEvalFunc("hdelete",
			   LSTRING, a1,
			   LSTRING, a2,
			   LEND);
  LFree(val);
}

void gv_name_object(int a1, char * a2)
{
  LObject *val = LEvalFunc("name-object",
			   LID, a1,
			   LSTRING, a2,
			   LEND);
  LFree(val);
}

void gv_update_draw(int a1, float a2)
{
  LObject *val = LEvalFunc("update-draw",
			   LID, a1,
			   LFLOAT, a2,
			   LEND);
  LFree(val);
}

void gv_draw(int a1)
{
  LObject *val = LEvalFunc("draw",
			   LID, a1,
			   LEND);
  LFree(val);
}

void gv_update(float a1)
{
  LObject *val = LEvalFunc("update",
			   LFLOAT, a1,
			   LEND);
  LFree(val);
}

void gv_redraw(int a1)
{
  LObject *val = LEvalFunc("redraw",
			   LID, a1,
			   LEND);
  LFree(val);
}

void gv_freeze(int a1, int a2)
{
  LObject *val = LEvalFunc("freeze",
			   LID, a1,
			   LKEYWORD, a2,
			   LEND);
  LFree(val);
}

void gv_xform_set(int a1, TransformStruct * a2)
{
  LObject *val = LEvalFunc("xform-set",
			   LID, a1,
			   LTRANSFORM, a2,
			   LEND);
  LFree(val);
}

void gv_xform(int a1, TransformStruct * a2)
{
  LObject *val = LEvalFunc("xform",
			   LID, a1,
			   LTRANSFORM, a2,
			   LEND);
  LFree(val);
}

void gv_xform_incr(int a1, TransformStruct * a2)
{
  LObject *val = LEvalFunc("xform-incr",
			   LID, a1,
			   LTRANSFORM, a2,
			   LEND);
  LFree(val);
}

int gv_new_camera(char * a1, CameraStruct * a2)
{
  LObject *val = LEvalFunc("new-camera",
			   LSTRING, a1,
			   LCAMERA, a2,
			   LEND);
  int retval;
  LFROMOBJ(LID)(val, &retval);
  LFree(val);
  return retval;
}

int gv_camera(char * a1, CameraStruct * a2)
{
  LObject *val = LEvalFunc("camera",
			   LSTRING, a1,
			   LCAMERA, a2,
			   LEND);
  int retval;
  LFROMOBJ(LINT)(val, &retval);
  LFree(val);
  return retval;
}

void gv_camera_reset(int a1)
{
  LObject *val = LEvalFunc("camera-reset",
			   LID, a1,
			   LEND);
  LFree(val);
}

int gv_new_alien(char * a1, GeomStruct * a2)
{
  LObject *val = LEvalFunc("new-alien",
			   LSTRING, a1,
			   LGEOM, a2,
			   LEND);
  int retval;
  LFROMOBJ(LID)(val, &retval);
  LFree(val);
  return retval;
}

int gv_new_geometry(char * a1, GeomStruct * a2)
{
  LObject *val = LEvalFunc("new-geometry",
			   LSTRING, a1,
			   LGEOM, a2,
			   LEND);
  int retval;
  LFROMOBJ(LID)(val, &retval);
  LFree(val);
  return retval;
}

void gv_geometry(char * a1, GeomStruct * a2)
{
  LObject *val = LEvalFunc("geometry",
			   LSTRING, a1,
			   LGEOM, a2,
			   LEND);
  LFree(val);
}

void gv_replace_geometry(char * a1, int *a2, int a2n, GeomStruct * a3)
{
  LObject *val = LEvalFunc("replace-geometry",
			   LSTRING, a1,
			   LARRAY, LINT, a2, a2n,
			   LGEOM, a3,
			   LEND);
  LFree(val);
}

void gv_copy(int a1, char * a2)
{
  LObject *val = LEvalFunc("copy",
			   LID, a1,
			   LSTRING, a2,
			   LEND);
  LFree(val);
}

void gv_delete(int a1)
{
  LObject *val = LEvalFunc("delete",
			   LID, a1,
			   LEND);
  LFree(val);
}

void gv_scene(int a1, GeomStruct * a2)
{
  LObject *val = LEvalFunc("scene",
			   LID, a1,
			   LGEOM, a2,
			   LEND);
  LFree(val);
}

void gv_winenter(int a1)
{
  LObject *val = LEvalFunc("winenter",
			   LID, a1,
			   LEND);
  LFree(val);
}

void gv_merge_ap(int a1, ApStruct * a2)
{
  LObject *val = LEvalFunc("merge-ap",
			   LID, a1,
			   LAP, a2,
			   LEND);
  LFree(val);
}

void gv_dice(int a1, int a2)
{
  LObject *val = LEvalFunc("dice",
			   LID, a1,
			   LINT, a2,
			   LEND);
  LFree(val);
}

void gv_bbox_draw(int a1, int a2)
{
  LObject *val = LEvalFunc("bbox-draw",
			   LID, a1,
			   LKEYWORD, a2,
			   LEND);
  LFree(val);
}

void gv_camera_draw(int a1, int a2)
{
  LObject *val = LEvalFunc("camera-draw",
			   LID, a1,
			   LKEYWORD, a2,
			   LEND);
  LFree(val);
}

void gv_evert(int a1, int a2)
{
  LObject *val = LEvalFunc("evert",
			   LID, a1,
			   LKEYWORD, a2,
			   LEND);
  LFree(val);
}

void gv_soft_shader(int a1, int a2)
{
  LObject *val = LEvalFunc("soft-shader",
			   LID, a1,
			   LKEYWORD, a2,
			   LEND);
  LFree(val);
}

LList  * gv_stereowin(int a1, int a2, int a3)
{
  LObject *val = LEvalFunc("stereowin",
			   LID, a1,
			   LKEYWORD, a2,
			   LINT, a3,
			   LEND);
  LList  * retval;
  LFROMOBJ(LLIST)(val, &retval);
  LFree(val);
  return retval;
}

void gv_space(int a1)
{
  LObject *val = LEvalFunc("space",
			   LKEYWORD, a1,
			   LEND);
  LFree(val);
}

void gv_hmodel(int a1, int a2)
{
  LObject *val = LEvalFunc("hmodel",
			   LID, a1,
			   LKEYWORD, a2,
			   LEND);
  LFree(val);
}

void gv_inhibit_warning(char * a1)
{
  LObject *val = LEvalFunc("inhibit-warning",
			   LSTRING, a1,
			   LEND);
  LFree(val);
}

void gv_hsphere_draw(int a1, int a2)
{
  LObject *val = LEvalFunc("hsphere-draw",
			   LID, a1,
			   LKEYWORD, a2,
			   LEND);
  LFree(val);
}

void gv_pickable(int a1, int a2)
{
  LObject *val = LEvalFunc("pickable",
			   LID, a1,
			   LKEYWORD, a2,
			   LEND);
  LFree(val);
}

void gv_normalization(int a1, int a2)
{
  LObject *val = LEvalFunc("normalization",
			   LID, a1,
			   LKEYWORD, a2,
			   LEND);
  LFree(val);
}

void gv_lines_closer(int a1, float a2)
{
  LObject *val = LEvalFunc("lines-closer",
			   LID, a1,
			   LFLOAT, a2,
			   LEND);
  LFree(val);
}

void gv_backcolor(int a1, float a2, float a3, float a4)
{
  LObject *val = LEvalFunc("backcolor",
			   LID, a1,
			   LFLOAT, a2,
			   LFLOAT, a3,
			   LFLOAT, a4,
			   LEND);
  LFree(val);
}

void gv_bbox_color(int a1, float a2, float a3, float a4)
{
  LObject *val = LEvalFunc("bbox-color",
			   LID, a1,
			   LFLOAT, a2,
			   LFLOAT, a3,
			   LFLOAT, a4,
			   LEND);
  LFree(val);
}

void gv_window(int a1, WindowStruct * a2)
{
  LObject *val = LEvalFunc("window",
			   LID, a1,
			   LWINDOW, a2,
			   LEND);
  LFree(val);
}

void gv_merge_baseap(ApStruct * a1)
{
  LObject *val = LEvalFunc("merge-baseap",
			   LAP, a1,
			   LEND);
  LFree(val);
}

void gv_exit()
{
  LObject *val = LEvalFunc("exit",
			   LEND);
  LFree(val);
}

void gv_set_motionscale(float a1)
{
  LObject *val = LEvalFunc("set-motionscale",
			   LFLOAT, a1,
			   LEND);
  LFree(val);
}

void gv_set_conformal_refine(float a1, int a2, int a3)
{
  LObject *val = LEvalFunc("set-conformal-refine",
			   LFLOAT, a1,
			   LINT, a2,
			   LKEYWORD, a3,
			   LEND);
  LFree(val);
}

void gv_write_comments(char * a1, int a2, int *a3, int a3n)
{
  LObject *val = LEvalFunc("write-comments",
			   LSTRING, a1,
			   LID, a2,
			   LARRAY, LINT, a3, a3n,
			   LEND);
  LFree(val);
}

void gv_event_mode(char * a1)
{
  LObject *val = LEvalFunc("event-mode",
			   LSTRING, a1,
			   LEND);
  LFree(val);
}

void gv_pick_invisible(int a1)
{
  LObject *val = LEvalFunc("pick-invisible",
			   LKEYWORD, a1,
			   LEND);
  LFree(val);
}

void gv_rawevent(int a1, int a2, int a3, int a4, long a5)
{
  LObject *val = LEvalFunc("rawevent",
			   LINT, a1,
			   LINT, a2,
			   LINT, a3,
			   LINT, a4,
			   LLONG, a5,
			   LEND);
  LFree(val);
}

int gv_rawpick(int a1, int a2, int a3)
{
  LObject *val = LEvalFunc("rawpick",
			   LID, a1,
			   LINT, a2,
			   LINT, a3,
			   LEND);
  int retval;
  LFROMOBJ(LINT)(val, &retval);
  LFree(val);
  return retval;
}

void gv_pick(int a1, int a2, float *a3, int a3n, float *a4, int a4n, float *a5, int a5n, float *a6, int a6n, int *a7, int a7n, int a8, int *a9, int a9n, int a10)
{
  LObject *val = LEvalFunc("pick",
			   LID, a1,
			   LID, a2,
			   LVARARRAY, LFLOAT, a3, a3n,
			   LVARARRAY, LFLOAT, a4, a4n,
			   LVARARRAY, LFLOAT, a5, a5n,
			   LVARARRAY, LFLOAT, a6, a6n,
			   LVARARRAY, LINT, a7, a7n,
			   LINT, a8,
			   LARRAY, LINT, a9, a9n,
			   LINT, a10,
			   LEND);
  LFree(val);
}

void gv_event_keys(int a1)
{
  LObject *val = LEvalFunc("event-keys",
			   LKEYWORD, a1,
			   LEND);
  LFree(val);
}

void gv_event_pick(int a1)
{
  LObject *val = LEvalFunc("event-pick",
			   LKEYWORD, a1,
			   LEND);
  LFree(val);
}

void gv_dither(int a1, int a2)
{
  LObject *val = LEvalFunc("dither",
			   LID, a1,
			   LKEYWORD, a2,
			   LEND);
  LFree(val);
}

void gv_ui_html_browser(char * a1)
{
  LObject *val = LEvalFunc("ui-html-browser",
			   LSTRING, a1,
			   LEND);
  LFree(val);
}

void gv_ui_pdf_viewer(char * a1)
{
  LObject *val = LEvalFunc("ui-pdf-viewer",
			   LSTRING, a1,
			   LEND);
  LFree(val);
}

void gv_shell(char * a1)
{
  LObject *val = LEvalFunc("shell",
			   LSTRINGS, a1,
			   LEND);
  LFree(val);
}

void gv_write_sexpr(char * a1, LObject * a2)
{
  LObject *val = LEvalFunc("write-sexpr",
			   LSTRING, a1,
			   LLOBJECT, a2,
			   LEND);
  LFree(val);
}

void gv_write_handle(char * a1, char * a2, char * a3)
{
  LObject *val = LEvalFunc("write-handle",
			   LSTRING, a1,
			   LSTRING, a2,
			   LSTRING, a3,
			   LEND);
  LFree(val);
}

void gv_dump_handles()
{
  LObject *val = LEvalFunc("dump-handles",
			   LEND);
  LFree(val);
}

void gv_dump_pools()
{
  LObject *val = LEvalFunc("dump-pools",
			   LEND);
  LFree(val);
}

char * gv_geomview_version()
{
  LObject *val = LEvalFunc("geomview-version",
			   LEND);
  char * retval;
  LFROMOBJ(LSTRING)(val, &retval);
  LFree(val);
  return retval;
}

void gv_rib_display(int a1, char * a2)
{
  LObject *val = LEvalFunc("rib-display",
			   LKEYWORD, a1,
			   LSTRING, a2,
			   LEND);
  LFree(val);
}

void gv_rib_snapshot(int a1, char * a2)
{
  LObject *val = LEvalFunc("rib-snapshot",
			   LID, a1,
			   LSTRING, a2,
			   LEND);
  LFree(val);
}

LList  * gv_ND_axes(char * a1, char * a2, int a3, int a4, int a5, int a6)
{
  LObject *val = LEvalFunc("ND-axes",
			   LSTRING, a1,
			   LSTRING, a2,
			   LINT, a3,
			   LINT, a4,
			   LINT, a5,
			   LINT, a6,
			   LEND);
  LList  * retval;
  LFROMOBJ(LLIST)(val, &retval);
  LFree(val);
  return retval;
}

LList  * gv_dimension(int a1)
{
  LObject *val = LEvalFunc("dimension",
			   LINT, a1,
			   LEND);
  LList  * retval;
  LFROMOBJ(LLIST)(val, &retval);
  LFree(val);
  return retval;
}

TmNStruct * gv_ND_xform(int a1, TmNStruct * a2)
{
  LObject *val = LEvalFunc("ND-xform",
			   LID, a1,
			   LTRANSFORMN, a2,
			   LEND);
  TmNStruct * retval;
  LFROMOBJ(LTRANSFORMN)(val, &retval);
  LFree(val);
  return retval;
}

TmNStruct * gv_ND_xform_set(int a1, TmNStruct * a2)
{
  LObject *val = LEvalFunc("ND-xform-set",
			   LID, a1,
			   LTRANSFORMN, a2,
			   LEND);
  TmNStruct * retval;
  LFROMOBJ(LTRANSFORMN)(val, &retval);
  LFree(val);
  return retval;
}

TmNStruct * gv_ND_xform_get(int a1, int a2)
{
  LObject *val = LEvalFunc("ND-xform-get",
			   LID, a1,
			   LID, a2,
			   LEND);
  TmNStruct * retval;
  LFROMOBJ(LTRANSFORMN)(val, &retval);
  LFree(val);
  return retval;
}

LList  * gv_ND_color(int a1, LList  * a2)
{
  LObject *val = LEvalFunc("ND-color",
			   LID, a1,
			   LLIST, a2,
			   LEND);
  LList  * retval;
  LFROMOBJ(LLIST)(val, &retval);
  LFree(val);
  return retval;
}

void gv_zoom(int a1, float a2)
{
  LObject *val = LEvalFunc("zoom",
			   LID, a1,
			   LFLOAT, a2,
			   LEND);
  LFree(val);
}

void gv_ezoom(int a1, float a2)
{
  LObject *val = LEvalFunc("ezoom",
			   LID, a1,
			   LFLOAT, a2,
			   LEND);
  LFree(val);
}

void gv_scale(int a1, float a2, float a3, float a4)
{
  LObject *val = LEvalFunc("scale",
			   LID, a1,
			   LFLOAT, a2,
			   LFLOAT, a3,
			   LFLOAT, a4,
			   LEND);
  LFree(val);
}

void gv_escale(int a1, float a2)
{
  LObject *val = LEvalFunc("escale",
			   LID, a1,
			   LFLOAT, a2,
			   LEND);
  LFree(val);
}

char * gv_real_id(char * a1)
{
  LObject *val = LEvalFunc("real-id",
			   LSTRING, a1,
			   LEND);
  char * retval;
  LFROMOBJ(LSTRING)(val, &retval);
  LFree(val);
  return retval;
}

void gv_transform(int a1, int a2, int a3, int a4, float a5, float a6, float a7, float a8, int a9)
{
  LObject *val = LEvalFunc("transform",
			   LID, a1,
			   LID, a2,
			   LID, a3,
			   LKEYWORD, a4,
			   LFLOAT, a5,
			   LFLOAT, a6,
			   LFLOAT, a7,
			   LFLOAT, a8,
			   LKEYWORD, a9,
			   LEND);
  LFree(val);
}

void gv_transform_incr(int a1, int a2, int a3, int a4, float a5, float a6, float a7, float a8, int a9)
{
  LObject *val = LEvalFunc("transform-incr",
			   LID, a1,
			   LID, a2,
			   LID, a3,
			   LKEYWORD, a4,
			   LFLOAT, a5,
			   LFLOAT, a6,
			   LFLOAT, a7,
			   LFLOAT, a8,
			   LKEYWORD, a9,
			   LEND);
  LFree(val);
}

void gv_transform_set(int a1, int a2, int a3, int a4, float a5, float a6, float a7)
{
  LObject *val = LEvalFunc("transform-set",
			   LID, a1,
			   LID, a2,
			   LID, a3,
			   LKEYWORD, a4,
			   LFLOAT, a5,
			   LFLOAT, a6,
			   LFLOAT, a7,
			   LEND);
  LFree(val);
}

void gv_position(int a1, int a2)
{
  LObject *val = LEvalFunc("position",
			   LID, a1,
			   LID, a2,
			   LEND);
  LFree(val);
}

void gv_position_at(int a1, int a2, char * a3)
{
  LObject *val = LEvalFunc("position-at",
			   LID, a1,
			   LID, a2,
			   LSTRING, a3,
			   LEND);
  LFree(val);
}

void gv_position_toward(int a1, int a2, char * a3)
{
  LObject *val = LEvalFunc("position-toward",
			   LID, a1,
			   LID, a2,
			   LSTRING, a3,
			   LEND);
  LFree(val);
}

void gv_new_center(int a1)
{
  LObject *val = LEvalFunc("new-center",
			   LID, a1,
			   LEND);
  LFree(val);
}

void gv_new_reset()
{
  LObject *val = LEvalFunc("new-reset",
			   LEND);
  LFree(val);
}

LList  * gv_look_encompass_size(float a1, float a2, float a3, float a4)
{
  LObject *val = LEvalFunc("look-encompass-size",
			   LFLOAT, a1,
			   LFLOAT, a2,
			   LFLOAT, a3,
			   LFLOAT, a4,
			   LEND);
  LList  * retval;
  LFROMOBJ(LLIST)(val, &retval);
  LFree(val);
  return retval;
}

void gv_look_encompass(int a1, int a2)
{
  LObject *val = LEvalFunc("look-encompass",
			   LID, a1,
			   LID, a2,
			   LEND);
  LFree(val);
}

void gv_look_toward(int a1, int a2, char * a3)
{
  LObject *val = LEvalFunc("look-toward",
			   LID, a1,
			   LID, a2,
			   LSTRING, a3,
			   LEND);
  LFree(val);
}

void gv_look(int a1, int a2)
{
  LObject *val = LEvalFunc("look",
			   LID, a1,
			   LID, a2,
			   LEND);
  LFree(val);
}

void gv_look_recenter(int a1, int a2)
{
  LObject *val = LEvalFunc("look-recenter",
			   LID, a1,
			   LID, a2,
			   LEND);
  LFree(val);
}

void gv_emodule_clear()
{
  LObject *val = LEvalFunc("emodule-clear",
			   LEND);
  LFree(val);
}

void gv_cursor_still(int a1)
{
  LObject *val = LEvalFunc("cursor-still",
			   LINT, a1,
			   LEND);
  LFree(val);
}

void gv_cursor_twitch(int a1)
{
  LObject *val = LEvalFunc("cursor-twitch",
			   LINT, a1,
			   LEND);
  LFree(val);
}

void gv_ap_override(int a1)
{
  LObject *val = LEvalFunc("ap-override",
			   LKEYWORD, a1,
			   LEND);
  LFree(val);
}

void gv_set_load_path(LList  * a1)
{
  LObject *val = LEvalFunc("set-load-path",
			   LLIST, a1,
			   LEND);
  LFree(val);
}

LList  * gv_load_path(LList  * a1)
{
  LObject *val = LEvalFunc("load-path",
			   LLIST, a1,
			   LEND);
  LList  * retval;
  LFROMOBJ(LLIST)(val, &retval);
  LFree(val);
  return retval;
}

void gv_set_emodule_path(LList  * a1)
{
  LObject *val = LEvalFunc("set-emodule-path",
			   LLIST, a1,
			   LEND);
  LFree(val);
}

LList  * gv_rehash_emodule_path()
{
  LObject *val = LEvalFunc("rehash-emodule-path",
			   LEND);
  LList  * retval;
  LFROMOBJ(LLIST)(val, &retval);
  LFree(val);
  return retval;
}

LList  * gv_emodule_path()
{
  LObject *val = LEvalFunc("emodule-path",
			   LEND);
  LList  * retval;
  LFROMOBJ(LLIST)(val, &retval);
  LFree(val);
  return retval;
}

char * gv_emodule_defined(char * a1)
{
  LObject *val = LEvalFunc("emodule-defined",
			   LSTRING, a1,
			   LEND);
  char * retval;
  LFROMOBJ(LSTRING)(val, &retval);
  LFree(val);
  return retval;
}

LList  * gv_all(char * a1, char * a2)
{
  LObject *val = LEvalFunc("all",
			   LSTRING, a1,
			   LSTRING, a2,
			   LEND);
  LList  * retval;
  LFROMOBJ(LLIST)(val, &retval);
  LFree(val);
  return retval;
}

void gv_camera_prop(GeomStruct * a1, int a2)
{
  LObject *val = LEvalFunc("camera-prop",
			   LGEOM, a1,
			   LKEYWORD, a2,
			   LEND);
  LFree(val);
}

void gv_write(char * a1, char * a2, LObject * a3, int a4)
{
  LObject *val = LEvalFunc("write",
			   LSTRING, a1,
			   LSTRING, a2,
			   LLOBJECT, a3,
			   LID, a4,
			   LEND);
  LFree(val);
}

int gv_snapshot(int a1, char * a2, char * a3, int a4, int a5)
{
  LObject *val = LEvalFunc("snapshot",
			   LID, a1,
			   LSTRING, a2,
			   LSTRING, a3,
			   LINT, a4,
			   LINT, a5,
			   LEND);
  int retval;
  LFROMOBJ(LINT)(val, &retval);
  LFree(val);
  return retval;
}

char * gv_bgimagefile(int a1, char * a2)
{
  LObject *val = LEvalFunc("background-image",
			   LID, a1,
			   LSTRING, a2,
			   LEND);
  char * retval;
  LFROMOBJ(LSTRING)(val, &retval);
  LFree(val);
  return retval;
}

void gv_processevents()
{
  LObject *val = LEvalFunc("process-events",
			   LEND);
  LFree(val);
}

void gv_ui_motion(int a1, int a2)
{
  LObject *val = LEvalFunc("ui-motion",
			   LKEYWORD, a1,
			   LKEYWORD, a2,
			   LEND);
  LFree(val);
}

void gv_ui_cam_focus(int a1)
{
  LObject *val = LEvalFunc("ui-cam-focus",
			   LKEYWORD, a1,
			   LEND);
  LFree(val);
}

void gv_ui_target(int a1, int a2)
{
  LObject *val = LEvalFunc("ui-target",
			   LID, a1,
			   LKEYWORD, a2,
			   LEND);
  LFree(val);
}

void gv_ui_center(int a1)
{
  LObject *val = LEvalFunc("ui-center",
			   LID, a1,
			   LEND);
  LFree(val);
}

void gv_ui_center_origin(int a1)
{
  LObject *val = LEvalFunc("ui-center-origin",
			   LKEYWORD, a1,
			   LEND);
  LFree(val);
}

void gv_ui_panel(char * a1, int a2, WindowStruct * a3)
{
  LObject *val = LEvalFunc("ui-panel",
			   LSTRING, a1,
			   LKEYWORD, a2,
			   LWINDOW, a3,
			   LEND);
  LFree(val);
}

void gv_ui_freeze(int a1)
{
  LObject *val = LEvalFunc("ui-freeze",
			   LKEYWORD, a1,
			   LEND);
  LFree(val);
}

void gv_ui_emodule_define(char * a1, char * a2)
{
  LObject *val = LEvalFunc("emodule-define",
			   LSTRING, a1,
			   LSTRING, a2,
			   LEND);
  LFree(val);
}

void gv_emodule_sort()
{
  LObject *val = LEvalFunc("emodule-sort",
			   LEND);
  LFree(val);
}

void gv_ui_emodule_start(char * a1)
{
  LObject *val = LEvalFunc("emodule-start",
			   LSTRING, a1,
			   LEND);
  LFree(val);
}


extern LObject *Lsetenv(Lake *, LList *);
extern LObject *Linput_translator(Lake *, LList *);
extern LObject *Lemodule_run(Lake *, LList *);
extern LObject *Lemodule_isrunning(Lake *, LList *);
extern LObject *Lcommand(Lake *, LList *);
extern LObject *Lsleep_for(Lake *, LList *);
extern LObject *Lsleep_until(Lake *, LList *);
extern LObject *Lset_clock(Lake *, LList *);
extern LObject *Lclock(Lake *, LList *);
extern LObject *Lecho(Lake *, LList *);
extern LObject *Lemodule_transmit(Lake *, LList *);
extern LObject *Lload(Lake *, LList *);
extern LObject *Lhdelete(Lake *, LList *);
extern LObject *Lname_object(Lake *, LList *);
extern LObject *Lupdate_draw(Lake *, LList *);
extern LObject *Ldraw(Lake *, LList *);
extern LObject *Lupdate(Lake *, LList *);
extern LObject *Lredraw(Lake *, LList *);
extern LObject *Lfreeze(Lake *, LList *);
extern LObject *Lxform_set(Lake *, LList *);
extern LObject *Lxform(Lake *, LList *);
extern LObject *Lxform_incr(Lake *, LList *);
extern LObject *Lnew_camera(Lake *, LList *);
extern LObject *Lcamera(Lake *, LList *);
extern LObject *Lcamera_reset(Lake *, LList *);
extern LObject *Lnew_alien(Lake *, LList *);
extern LObject *Lnew_geometry(Lake *, LList *);
extern LObject *Lgeometry(Lake *, LList *);
extern LObject *Lreplace_geometry(Lake *, LList *);
extern LObject *Lcopy(Lake *, LList *);
extern LObject *Ldelete(Lake *, LList *);
extern LObject *Lscene(Lake *, LList *);
extern LObject *Lwinenter(Lake *, LList *);
extern LObject *Lmerge_ap(Lake *, LList *);
extern LObject *Ldice(Lake *, LList *);
extern LObject *Lbbox_draw(Lake *, LList *);
extern LObject *Lcamera_draw(Lake *, LList *);
extern LObject *Levert(Lake *, LList *);
extern LObject *Lsoft_shader(Lake *, LList *);
extern LObject *Lstereowin(Lake *, LList *);
extern LObject *Lspace(Lake *, LList *);
extern LObject *Lhmodel(Lake *, LList *);
extern LObject *Linhibit_warning(Lake *, LList *);
extern LObject *Lhsphere_draw(Lake *, LList *);
extern LObject *Lpickable(Lake *, LList *);
extern LObject *Lnormalization(Lake *, LList *);
extern LObject *Llines_closer(Lake *, LList *);
extern LObject *Lbackcolor(Lake *, LList *);
extern LObject *Lbbox_color(Lake *, LList *);
extern LObject *Lwindow(Lake *, LList *);
extern LObject *Lmerge_baseap(Lake *, LList *);
extern LObject *Lexit(Lake *, LList *);
extern LObject *Lset_motionscale(Lake *, LList *);
extern LObject *Lset_conformal_refine(Lake *, LList *);
extern LObject *Lwrite_comments(Lake *, LList *);
extern LObject *Levent_mode(Lake *, LList *);
extern LObject *Lpick_invisible(Lake *, LList *);
extern LObject *Lrawevent(Lake *, LList *);
extern LObject *Lrawpick(Lake *, LList *);
extern LObject *Lpick(Lake *, LList *);
extern LObject *Levent_keys(Lake *, LList *);
extern LObject *Levent_pick(Lake *, LList *);
extern LObject *Ldither(Lake *, LList *);
extern LObject *Lui_html_browser(Lake *, LList *);
extern LObject *Lui_pdf_viewer(Lake *, LList *);
extern LObject *Lshell(Lake *, LList *);
extern LObject *Lwrite_sexpr(Lake *, LList *);
extern LObject *Lwrite_handle(Lake *, LList *);
extern LObject *Ldump_handles(Lake *, LList *);
extern LObject *Ldump_pools(Lake *, LList *);
extern LObject *Lgeomview_version(Lake *, LList *);
extern LObject *Lrib_display(Lake *, LList *);
extern LObject *Lrib_snapshot(Lake *, LList *);
extern LObject *LND_axes(Lake *, LList *);
extern LObject *Ldimension(Lake *, LList *);
extern LObject *LND_xform(Lake *, LList *);
extern LObject *LND_xform_set(Lake *, LList *);
extern LObject *LND_xform_get(Lake *, LList *);
extern LObject *LND_color(Lake *, LList *);
extern LObject *Lzoom(Lake *, LList *);
extern LObject *Lezoom(Lake *, LList *);
extern LObject *Lscale(Lake *, LList *);
extern LObject *Lescale(Lake *, LList *);
extern LObject *Lreal_id(Lake *, LList *);
extern LObject *Ltransform(Lake *, LList *);
extern LObject *Ltransform_incr(Lake *, LList *);
extern LObject *Ltransform_set(Lake *, LList *);
extern LObject *Lposition(Lake *, LList *);
extern LObject *Lposition_at(Lake *, LList *);
extern LObject *Lposition_toward(Lake *, LList *);
extern LObject *Lnew_center(Lake *, LList *);
extern LObject *Lnew_reset(Lake *, LList *);
extern LObject *Llook_encompass_size(Lake *, LList *);
extern LObject *Llook_encompass(Lake *, LList *);
extern LObject *Llook_toward(Lake *, LList *);
extern LObject *Llook(Lake *, LList *);
extern LObject *Llook_recenter(Lake *, LList *);
extern LObject *Lemodule_clear(Lake *, LList *);
extern LObject *Lcursor_still(Lake *, LList *);
extern LObject *Lcursor_twitch(Lake *, LList *);
extern LObject *Lap_override(Lake *, LList *);
extern LObject *Lset_load_path(Lake *, LList *);
extern LObject *Lload_path(Lake *, LList *);
extern LObject *Lset_emodule_path(Lake *, LList *);
extern LObject *Lrehash_emodule_path(Lake *, LList *);
extern LObject *Lemodule_path(Lake *, LList *);
extern LObject *Lemodule_defined(Lake *, LList *);
extern LObject *Lall(Lake *, LList *);
extern LObject *Lcamera_prop(Lake *, LList *);
extern LObject *Lwrite(Lake *, LList *);
extern LObject *Lsnapshot(Lake *, LList *);
extern LObject *Lbgimagefile(Lake *, LList *);
extern LObject *Lprocessevents(Lake *, LList *);
extern LObject *Lui_motion(Lake *, LList *);
extern LObject *Lui_cam_focus(Lake *, LList *);
extern LObject *Lui_target(Lake *, LList *);
extern LObject *Lui_center(Lake *, LList *);
extern LObject *Lui_center_origin(Lake *, LList *);
extern LObject *Lui_panel(Lake *, LList *);
extern LObject *Lui_freeze(Lake *, LList *);
extern LObject *Lui_emodule_define(Lake *, LList *);
extern LObject *Lemodule_sort(Lake *, LList *);
extern LObject *Lui_emodule_start(Lake *, LList *);

extern char Hsetenv[];
extern char Hinput_translator[];
extern char Hemodule_run[];
extern char Hemodule_isrunning[];
extern char Hcommand[];
extern char Hsleep_for[];
extern char Hsleep_until[];
extern char Hset_clock[];
extern char Hclock[];
extern char Hecho[];
extern char Hemodule_transmit[];
extern char Hload[];
extern char Hhdelete[];
extern char Hname_object[];
extern char Hupdate_draw[];
extern char Hdraw[];
extern char Hupdate[];
extern char Hredraw[];
extern char Hfreeze[];
extern char Hxform_set[];
extern char Hxform[];
extern char Hxform_incr[];
extern char Hnew_camera[];
extern char Hcamera[];
extern char Hcamera_reset[];
extern char Hnew_alien[];
extern char Hnew_geometry[];
extern char Hgeometry[];
extern char Hreplace_geometry[];
extern char Hcopy[];
extern char Hdelete[];
extern char Hscene[];
extern char Hwinenter[];
extern char Hmerge_ap[];
extern char Hdice[];
extern char Hbbox_draw[];
extern char Hcamera_draw[];
extern char Hevert[];
extern char Hsoft_shader[];
extern char Hstereowin[];
extern char Hspace[];
extern char Hhmodel[];
extern char Hinhibit_warning[];
extern char Hhsphere_draw[];
extern char Hpickable[];
extern char Hnormalization[];
extern char Hlines_closer[];
extern char Hbackcolor[];
extern char Hbbox_color[];
extern char Hwindow[];
extern char Hmerge_baseap[];
extern char Hexit[];
extern char Hset_motionscale[];
extern char Hset_conformal_refine[];
extern char Hwrite_comments[];
extern char Hevent_mode[];
extern char Hpick_invisible[];
extern char Hrawevent[];
extern char Hrawpick[];
extern char Hpick[];
extern char Hevent_keys[];
extern char Hevent_pick[];
extern char Hdither[];
extern char Hui_html_browser[];
extern char Hui_pdf_viewer[];
extern char Hshell[];
extern char Hwrite_sexpr[];
extern char Hwrite_handle[];
extern char Hdump_handles[];
extern char Hdump_pools[];
extern char Hgeomview_version[];
extern char Hrib_display[];
extern char Hrib_snapshot[];
extern char HND_axes[];
extern char Hdimension[];
extern char HND_xform[];
extern char HND_xform_set[];
extern char HND_xform_get[];
extern char HND_color[];
extern char Hzoom[];
extern char Hezoom[];
extern char Hscale[];
extern char Hescale[];
extern char Hreal_id[];
extern char Htransform[];
extern char Htransform_incr[];
extern char Htransform_set[];
extern char Hposition[];
extern char Hposition_at[];
extern char Hposition_toward[];
extern char Hnew_center[];
extern char Hnew_reset[];
extern char Hlook_encompass_size[];
extern char Hlook_encompass[];
extern char Hlook_toward[];
extern char Hlook[];
extern char Hlook_recenter[];
extern char Hemodule_clear[];
extern char Hcursor_still[];
extern char Hcursor_twitch[];
extern char Hap_override[];
extern char Hset_load_path[];
extern char Hload_path[];
extern char Hset_emodule_path[];
extern char Hrehash_emodule_path[];
extern char Hemodule_path[];
extern char Hemodule_defined[];
extern char Hall[];
extern char Hcamera_prop[];
extern char Hwrite[];
extern char Hsnapshot[];
extern char Hbgimagefile[];
extern char Hprocessevents[];
extern char Hui_motion[];
extern char Hui_cam_focus[];
extern char Hui_target[];
extern char Hui_center[];
extern char Hui_center_origin[];
extern char Hui_panel[];
extern char Hui_freeze[];
extern char Hui_emodule_define[];
extern char Hemodule_sort[];
extern char Hui_emodule_start[];


void clang_init()
{
  LDefun("setenv", Lsetenv, Hsetenv);
  LDefun("input-translator", Linput_translator, Hinput_translator);
  LDefun("emodule-run", Lemodule_run, Hemodule_run);
  LDefun("emodule-isrunning", Lemodule_isrunning, Hemodule_isrunning);
  LDefun("command", Lcommand, Hcommand);
  LDefun("sleep-for", Lsleep_for, Hsleep_for);
  LDefun("sleep-until", Lsleep_until, Hsleep_until);
  LDefun("set-clock", Lset_clock, Hset_clock);
  LDefun("clock", Lclock, Hclock);
  LDefun("echo", Lecho, Hecho);
  LDefun("emodule-transmit", Lemodule_transmit, Hemodule_transmit);
  LDefun("load", Lload, Hload);
  LDefun("hdelete", Lhdelete, Hhdelete);
  LDefun("name-object", Lname_object, Hname_object);
  LDefun("update-draw", Lupdate_draw, Hupdate_draw);
  LDefun("draw", Ldraw, Hdraw);
  LDefun("update", Lupdate, Hupdate);
  LDefun("redraw", Lredraw, Hredraw);
  LDefun("freeze", Lfreeze, Hfreeze);
  LDefun("xform-set", Lxform_set, Hxform_set);
  LDefun("xform", Lxform, Hxform);
  LDefun("xform-incr", Lxform_incr, Hxform_incr);
  LDefun("new-camera", Lnew_camera, Hnew_camera);
  LDefun("camera", Lcamera, Hcamera);
  LDefun("camera-reset", Lcamera_reset, Hcamera_reset);
  LDefun("new-alien", Lnew_alien, Hnew_alien);
  LDefun("new-geometry", Lnew_geometry, Hnew_geometry);
  LDefun("geometry", Lgeometry, Hgeometry);
  LDefun("replace-geometry", Lreplace_geometry, Hreplace_geometry);
  LDefun("copy", Lcopy, Hcopy);
  LDefun("delete", Ldelete, Hdelete);
  LDefun("scene", Lscene, Hscene);
  LDefun("winenter", Lwinenter, Hwinenter);
  LDefun("merge-ap", Lmerge_ap, Hmerge_ap);
  LDefun("dice", Ldice, Hdice);
  LDefun("bbox-draw", Lbbox_draw, Hbbox_draw);
  LDefun("camera-draw", Lcamera_draw, Hcamera_draw);
  LDefun("evert", Levert, Hevert);
  LDefun("soft-shader", Lsoft_shader, Hsoft_shader);
  LDefun("stereowin", Lstereowin, Hstereowin);
  LDefun("space", Lspace, Hspace);
  LDefun("hmodel", Lhmodel, Hhmodel);
  LDefun("inhibit-warning", Linhibit_warning, Hinhibit_warning);
  LDefun("hsphere-draw", Lhsphere_draw, Hhsphere_draw);
  LDefun("pickable", Lpickable, Hpickable);
  LDefun("normalization", Lnormalization, Hnormalization);
  LDefun("lines-closer", Llines_closer, Hlines_closer);
  LDefun("backcolor", Lbackcolor, Hbackcolor);
  LDefun("bbox-color", Lbbox_color, Hbbox_color);
  LDefun("window", Lwindow, Hwindow);
  LDefun("merge-baseap", Lmerge_baseap, Hmerge_baseap);
  LDefun("exit", Lexit, Hexit);
  LDefun("set-motionscale", Lset_motionscale, Hset_motionscale);
  LDefun("set-conformal-refine", Lset_conformal_refine, Hset_conformal_refine);
  LDefun("write-comments", Lwrite_comments, Hwrite_comments);
  LDefun("event-mode", Levent_mode, Hevent_mode);
  LDefun("pick-invisible", Lpick_invisible, Hpick_invisible);
  LDefun("rawevent", Lrawevent, Hrawevent);
  LDefun("rawpick", Lrawpick, Hrawpick);
  LDefun("pick", Lpick, Hpick);
  LDefun("event-keys", Levent_keys, Hevent_keys);
  LDefun("event-pick", Levent_pick, Hevent_pick);
  LDefun("dither", Ldither, Hdither);
  LDefun("ui-html-browser", Lui_html_browser, Hui_html_browser);
  LDefun("ui-pdf-viewer", Lui_pdf_viewer, Hui_pdf_viewer);
  LDefun("shell", Lshell, Hshell);
  LDefun("write-sexpr", Lwrite_sexpr, Hwrite_sexpr);
  LDefun("write-handle", Lwrite_handle, Hwrite_handle);
  LDefun("dump-handles", Ldump_handles, Hdump_handles);
  LDefun("dump-pools", Ldump_pools, Hdump_pools);
  LDefun("geomview-version", Lgeomview_version, Hgeomview_version);
  LDefun("rib-display", Lrib_display, Hrib_display);
  LDefun("rib-snapshot", Lrib_snapshot, Hrib_snapshot);
  LDefun("ND-axes", LND_axes, HND_axes);
  LDefun("dimension", Ldimension, Hdimension);
  LDefun("ND-xform", LND_xform, HND_xform);
  LDefun("ND-xform-set", LND_xform_set, HND_xform_set);
  LDefun("ND-xform-get", LND_xform_get, HND_xform_get);
  LDefun("ND-color", LND_color, HND_color);
  LDefun("zoom", Lzoom, Hzoom);
  LDefun("ezoom", Lezoom, Hezoom);
  LDefun("scale", Lscale, Hscale);
  LDefun("escale", Lescale, Hescale);
  LDefun("real-id", Lreal_id, Hreal_id);
  LDefun("transform", Ltransform, Htransform);
  LDefun("transform-incr", Ltransform_incr, Htransform_incr);
  LDefun("transform-set", Ltransform_set, Htransform_set);
  LDefun("position", Lposition, Hposition);
  LDefun("position-at", Lposition_at, Hposition_at);
  LDefun("position-toward", Lposition_toward, Hposition_toward);
  LDefun("new-center", Lnew_center, Hnew_center);
  LDefun("new-reset", Lnew_reset, Hnew_reset);
  LDefun("look-encompass-size", Llook_encompass_size, Hlook_encompass_size);
  LDefun("look-encompass", Llook_encompass, Hlook_encompass);
  LDefun("look-toward", Llook_toward, Hlook_toward);
  LDefun("look", Llook, Hlook);
  LDefun("look-recenter", Llook_recenter, Hlook_recenter);
  LDefun("emodule-clear", Lemodule_clear, Hemodule_clear);
  LDefun("cursor-still", Lcursor_still, Hcursor_still);
  LDefun("cursor-twitch", Lcursor_twitch, Hcursor_twitch);
  LDefun("ap-override", Lap_override, Hap_override);
  LDefun("set-load-path", Lset_load_path, Hset_load_path);
  LDefun("load-path", Lload_path, Hload_path);
  LDefun("set-emodule-path", Lset_emodule_path, Hset_emodule_path);
  LDefun("rehash-emodule-path", Lrehash_emodule_path, Hrehash_emodule_path);
  LDefun("emodule-path", Lemodule_path, Hemodule_path);
  LDefun("emodule-defined", Lemodule_defined, Hemodule_defined);
  LDefun("all", Lall, Hall);
  LDefun("camera-prop", Lcamera_prop, Hcamera_prop);
  LDefun("write", Lwrite, Hwrite);
  LDefun("snapshot", Lsnapshot, Hsnapshot);
  LDefun("background-image", Lbgimagefile, Hbgimagefile);
  LDefun("process-events", Lprocessevents, Hprocessevents);
  LDefun("ui-motion", Lui_motion, Hui_motion);
  LDefun("ui-cam-focus", Lui_cam_focus, Hui_cam_focus);
  LDefun("ui-target", Lui_target, Hui_target);
  LDefun("ui-center", Lui_center, Hui_center);
  LDefun("ui-center-origin", Lui_center_origin, Hui_center_origin);
  LDefun("ui-panel", Lui_panel, Hui_panel);
  LDefun("ui-freeze", Lui_freeze, Hui_freeze);
  LDefun("emodule-define", Lui_emodule_define, Hui_emodule_define);
  LDefun("emodule-sort", Lemodule_sort, Hemodule_sort);
  LDefun("emodule-start", Lui_emodule_start, Hui_emodule_start);
}

