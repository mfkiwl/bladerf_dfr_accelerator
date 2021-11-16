#include "HLS/hls_float.h"

#include "dfr.h"

using namespace ihc;

using DFR_FP = hls_float<8, 17, fp_config::FP_Round::RNE>;

DFR_FP MASK[] = {
DFR_FP(0.28709830748868337),
DFR_FP(-0.26063055700704785),
DFR_FP(0.3764842308107038),
DFR_FP(-0.44143196519480565),
DFR_FP(-0.16388293945433963),
DFR_FP(-0.34972053310516094),
DFR_FP(-0.049660633350713024),
DFR_FP(0.29632427028729424),
DFR_FP(-0.26935779100625257),
DFR_FP(-0.4479786989355904),
DFR_FP(-0.0954481601784718),
DFR_FP(-0.30148695549074467),
DFR_FP(-0.4092469543808781),
DFR_FP(0.08033238598685066),
DFR_FP(-0.2013038671810774),
DFR_FP(0.17199487795635937),
DFR_FP(-0.3004845560317867),
DFR_FP(0.4421131105064978),
DFR_FP(-0.13488983175517144),
DFR_FP(-0.3945047204297705),
DFR_FP(0.12910815153970923),
DFR_FP(0.4271545530678674),
DFR_FP(-0.05962284528421602),
DFR_FP(0.45459049369073723),
DFR_FP(-0.00010418631235298292),
DFR_FP(-0.07477137515092447),
DFR_FP(0.12021345201537781),
DFR_FP(0.4950965052353241),
DFR_FP(0.4489436749377653),
DFR_FP(-0.039954860690903926),
DFR_FP(0.25772884530829143),
DFR_FP(-0.002577304512381029),
DFR_FP(0.02931216019677041),
DFR_FP(0.2857857007138075),
DFR_FP(-0.08534415064432921),
DFR_FP(0.23448357178872936),
DFR_FP(0.21114287798974984),
DFR_FP(0.43205968661337824),
DFR_FP(-0.3850673667190948),
DFR_FP(0.2290151170763094),
DFR_FP(0.4274239286245599),
DFR_FP(0.4679261899246464),
DFR_FP(-0.4852936950346307),
DFR_FP(0.36364009024557575),
DFR_FP(0.4811950400663443),
DFR_FP(0.45721017961096355),
DFR_FP(-0.3512359877675021),
DFR_FP(0.47262881382295496),
DFR_FP(0.38993555572052063),
DFR_FP(0.3223738275430704)
};


DFR_FP W[] = {
DFR_FP(-0.07984663594634611),
DFR_FP(0.06990546061523162),
DFR_FP(-2.4461795838038825),
DFR_FP(-0.2478298497219953),
DFR_FP(0.4229882524182287),
DFR_FP(0.5689905011753496),
DFR_FP(0.005442108644302834),
DFR_FP(-0.4245067349504268),
DFR_FP(1.6254775694542403),
DFR_FP(6.524140362256503),
DFR_FP(0.024194246083233395),
DFR_FP(0.008890220341662314),
DFR_FP(-1.2741159273366733),
DFR_FP(0.05480084970293575),
DFR_FP(-0.09718434548446453),
DFR_FP(305.2343364338085),
DFR_FP(-0.15242820243361166),
DFR_FP(-76.75023332569612),
DFR_FP(-0.2720570730177223),
DFR_FP(-0.32368819614083577),
DFR_FP(-269.4342332123924),
DFR_FP(4.553757555403706),
DFR_FP(-0.31829378990975954),
DFR_FP(-5.401371679204203),
DFR_FP(481.14513970903863),
DFR_FP(0.7085678521531492),
DFR_FP(-0.9495515330730768),
DFR_FP(-321.10666684194166),
DFR_FP(-5.105070621197569),
DFR_FP(6.019762280571285),
DFR_FP(-0.08898028425613091),
DFR_FP(1.991190781225896),
DFR_FP(7.261172521365097),
DFR_FP(0.26039471092097255),
DFR_FP(-0.9899848099739819),
DFR_FP(-0.16115952611200157),
DFR_FP(637.2063523132383),
DFR_FP(0.2293919141352596),
DFR_FP(-0.18478705863647882),
DFR_FP(-31.130013648971726),
DFR_FP(4.886190907609034),
DFR_FP(0.2401681560315012),
DFR_FP(0.04829236503039169),
DFR_FP(393.8701502773274),
DFR_FP(0.06271073313354236),
DFR_FP(-0.7629181651948329),
DFR_FP(6.31111314998725),
DFR_FP(-0.22655251815967858),
DFR_FP(-0.4998416520380733),
DFR_FP(0.2283084510709159)
};