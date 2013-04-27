use <Metamaquina2.scad>;

/*Thickness of acrylic or plywood sheets to use.*/
thickness = 6; //millimiters

/*This value is added to the thickness value when drawing cuts for connecting perpendicular sheets together*/
slot_extra_thickness = 0.5;

module TSlot_holes(width=50){
  t_slot_holes(width=width, thickness=thickness+slot_extra_thickness);
}

module TSlot_joints(width=50){
  t_slot_joints(width=width, thickness=thickness, joint_size=5);
}

/*z motor placement in the original Prusa was on top. Our design uses the z motors in the bottom of the machine, but if you want them on top, you can set this variable to true. */
zmotors_on_top = false;

/* Desired build volume: */
BuildVolume_X=200;
BuildVolume_Y=200;
BuildVolume_Z=150;

//rendering configs:
render_lasercut=true;
render_pcb=true;
render_ABS=true;
render_PLA=true;
render_metal=true;
render_threaded_metal=true;
render_rubber=true;
render_peek=true;
render_nylon=true;
render_acrylic=true;

render_nozzle=true;
render_powersupply=true;
render_calibration_guide = false;
render_build_volume=false;
render_xplatform=true;
render_bolts = false; //work-in-progress
render_extruder = true;

//Colors
dark_green = [0,0.2,0];
rubber_color = [0.1, 0.1, 0.1];
nozzle_color = "gold";
pcb_color = [1.0, 0.0, 0.0];
threaded_metal_color = [0.6, 0.6, 0.6];
metal_color = [0.7, 0.7, 0.7];
powersupply_color = metal_color;
PLA_color = [0.95, 0.35, 0.35];
ABS_color = [0.95, 0.95, 0.85];
//sheet_color = [0.95, 0.8, 0.65];
sheet_color = [227/230, 190/230, 151/230];
//sheet_color = [0.9, 0.3, 0.3, 1];
peek_color = "beige";
dark_grey = [0.3, 0.3, 0.3];
green_plastic_color = [0.7,0.8,0,7];
black_plastic_color = [0.3,0.3,0.3];

epsilon=0.1;
inch=25.4;
m25_diameter = 2.5;
m3_diameter = 3;
m4_diameter = 4;
m8_diameter = 8;

//-------------------------
//RepRap standards:

X_rods_distance = 50;
X_rods_diameter=8;
z_rod_z_bar_distance = 30;
Y_rods_distance = 140;

//-------------------------
extruder_mount_holes_distance = X_rods_distance + 14;
microswitch_holes_distance = 9.4;
endstop_holder_width = 15;//TODO
endstop_holder_height = 8;//TODO

XPlatform_height = 45;
