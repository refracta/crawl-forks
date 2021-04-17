struct mutation_def
{
    mutation_type mutation;
    short       weight;     ///< Commonality of the mutation; bigger = appears
                            /// more often.
    short       levels;     ///< The number of levels of the mutation.
    mutflags    uses;       ///< Bitfield holding types of effects that grant
                            /// this mutation (mutflag::*)
    bool        form_based; ///< Mutation is suppressed when shapechanged.
    const char* short_desc; ///< What appears on the '%' screen.
    const char* have[3];    ///< What appears on the 'A' screen.
    const char* gain[3];    ///< Message when you gain the mutation.
    const char* lose[3];    ///< Message when you lose the mutation.
};

struct mutation_category_def
{
  mutation_type mutation;
  const char* short_desc;
};

static const mutation_def mut_data[] =
{

// Messaging handled elsewhere.
{ MUT_STATS, 45, 255, mutflag::good | mutflag::bad, false,
  "stats",

  { "", "", "" },
  { "", "", "" },
  { "", "", "" },
},

{ MUT_POISON_RESISTANCE, 4, 1, mutflag::good, true,
  "poison resistance",

  {"Your system is resistant to poisons. (rPois)", "", ""},
  {"You feel resistant to poisons.", "",  ""},
  {"You feel less resistant to poisons.", "", ""},
},

{ MUT_CARNIVOROUS, 0, 1, mutflag::good, false,
  "carnivore",

  {"You are carnivorous and can eat meat at any time.", "", ""},
  {"You hunger for flesh.", "", ""},
  {"You feel able to eat a more balanced diet.", "", ""},
},

{ MUT_HERBIVOROUS, 0, 1, mutflag::bad, false,
  "herbivore",

  {"You are a herbivore.", "", ""},
  {"You hunger for vegetation.", "", ""},
  {"You feel able to eat a more balanced diet."},
},

{ MUT_HEAT_RESISTANCE, 4, 3, mutflag::good, true,
  "fire resistance",

  {"You are heat resistant. (rF+)",
   "You are very heat resistant. (rF++)",
   "You are almost immune to the effects of heat. (rF+++)"},

  {"You feel resistant to heat.",
   "You feel more resistant to heat.",
   "You feel more resistant to heat."},

  {"You no longer feel heat resistant.",
   "You feel less heat resistant.",
   "You feel less heat resistant."},
},

{ MUT_COLD_RESISTANCE, 4, 3, mutflag::good, true,
  "cold resistance",

  {"You are cold resistant. (rC+)",
   "You are very cold resistant. (rC++)",
   "You are almost immune to the effects of cold. (rC+++)"},

  {"You feel resistant to cold.",
   "You feel more resistant to cold.",
   "You feel more resistant to cold."},

  {"You no longer feel cold resistant.",
   "You feel less cold resistant.",
   "You feel less cold resistant."},
},

{ MUT_HEAT_VULNERABILITY, 0, 3,
  mutflag::bad | mutflag::qazlal, true,
  "heat vulnerability",

  {"You are vulnerable to heat. (rF-)",
   "You are very vulnerable to heat. (rF--)",
   "You are extremely vulnerable to heat. (rF---)"},

  {"You feel vulnerable to heat.",
   "You feel vulnerable to heat.",
   "You feel vulnerable to heat."},

  {"You no longer feel vulnerable to heat.",
   "You feel less vulnerable to heat.",
   "You feel less vulnerable to heat."},
},

{ MUT_COLD_VULNERABILITY, 0, 3,
  mutflag::bad | mutflag::qazlal, true,

  "cold vulnerability",

  {"You are vulnerable to cold. (rC-)",
   "You are very vulnerable to cold. (rC--)",
   "You are extremely vulnerable to cold. (rC---)"},

  {"You feel vulnerable to cold.",
   "You feel vulnerable to cold.",
   "You feel vulnerable to cold."},

  {"You no longer feel vulnerable to cold.",
   "You feel less vulnerable to cold.",
   "You feel less vulnerable to cold."},
},

{ MUT_DEMONIC_GUARDIAN, 0, 3, mutflag::good, false,
  "demonic guardian",

  {"A weak demonic guardian rushes to your aid.",
   "A demonic guardian rushes to your aid.",
   "A powerful demonic guardian rushes to your aid."},

  {"You feel the presence of a demonic guardian.",
   "Your guardian grows in power.",
   "Your guardian grows in power."},

  {"Your demonic guardian is gone.",
   "Your demonic guardian is weakened.",
   "Your demonic guardian is weakened."},
},

{ MUT_SHOCK_RESISTANCE, 2, 1, mutflag::good, true,
  "electricity resistance",

  {"You are resistant to electric shocks. (rElec)", "", ""},
  {"You feel insulated.", "", ""},
  {"You feel conductive.", "", ""},
},

{ MUT_SHOCK_VULNERABILITY, 0, 1, mutflag::bad | mutflag::qazlal, true,
  "electricity vulnerability",

  {"You are vulnerable to electric shocks.", "", ""},
  {"You feel vulnerable to electricity.", "", ""},
  {"You feel less vulnerable to electricity.", "", ""},
},

{ MUT_REGENERATION, 2, 3, mutflag::good, false,
  "regeneration",

  {"Your natural rate of healing is unusually fast.",
   "You heal very quickly.",
   "You regenerate."},

  {"You begin to heal more quickly.",
   "You begin to heal more quickly.",
   "You begin to regenerate."},

  {"Your rate of healing slows.",
   "Your rate of healing slows.",
   "Your rate of healing slows."},
},

{ MUT_INHIBITED_REGENERATION, 3, 1, mutflag::bad, false,
  "inhibited regeneration",

  {"You do not regenerate when monsters are visible.", "", ""},
  {"Your regeneration stops near monsters.", "", ""},
  {"You begin to regenerate regardless of the presence of monsters.", "", ""},
},

{ MUT_FAST_METABOLISM, 0, 3, mutflag::bad, false,
  "fast metabolism",

  {"You have a fast metabolism.",
   "You have a very fast metabolism.",
   "Your metabolism is lightning-fast."},

  {"You feel a little hungry.",
   "You feel a little hungry.",
   "You feel a little hungry."},

  {"Your metabolism slows.",
   "Your metabolism slows.",
   "Your metabolism slows."},
},

{ MUT_SLOW_METABOLISM, 0, 2, mutflag::good, false,
  "slow metabolism",

  {"You have a slow metabolism.",
   "You need to consume almost no food.",
   ""},

  {"Your metabolism slows.",
   "Your metabolism slows.",
   ""},

  {"You feel a little hungry.",
   "You feel a little hungry.",
   ""},
},

{ MUT_MERFOLK_TAIL, 0, 1, mutflag::good, true,
  "merfolk tail",

  { "On contact with water, your feet merge into a fishtail, which allows you to swim quickly, evasively and stealthily.", "", "" },
  { "", "", "" },
  { "", "", "" },
},

{ MUT_TELEPORT, 3, 1, mutflag::bad, false,
  "teleportitis",

  {"You are often teleported next to monsters.", "", ""},
  {"You feel weirdly uncertain.", "", ""},
  {"You feel stable.", "", ""},
},

{ MUT_MAGIC_RESISTANCE, 5, 1, mutflag::good, false,
  "magic resistance",

  {"You are highly resistant to hostile enchantments. (MR++)", "", ""},
  {"You feel more resistant to hostile enchantments.", "", ""},
  {"You feel vulnerable to hostile enchantments.", "", ""},
},

{ MUT_FAST, 0, 3, mutflag::good, true,
  "speed",

  {"You cover ground quickly.",
   "You cover ground very quickly.",
   "You cover ground extremely quickly."},

  {"You feel quick.",
   "You feel quick.",
   "You feel quick."},

  {"You feel sluggish.",
   "You feel sluggish.",
   "You feel sluggish."},
},

{ MUT_SLOW, 0, 3, mutflag::bad, true,
  "slowness",

  {"You cover ground slowly.",
   "You cover ground very slowly.",
   "You cover ground extremely slowly."},

  {"You feel sluggish.",
   "You feel sluggish.",
   "You feel sluggish."},

  {"You feel quick.",
   "You feel quick.",
   "You feel quick."},
},

{ MUT_ACUTE_VISION, 2, 1, mutflag::good, false,
  "see invisible",

  {"You have supernaturally acute eyesight. (+Vis)", "", ""},
  {"Your vision sharpens.", "", ""},
  {"Your vision seems duller.", "", ""},
},

{ MUT_DEFORMED, 8, 1, mutflag::bad | mutflag::xom, true,
  "deformed body",

  {"Armour fits poorly on your strangely shaped body.", "", ""},
  {"Your body twists and deforms.", "", ""},
  {"Your body's shape seems more normal.", "", ""},
},

{ MUT_SPIT_POISON, 8, 2, mutflag::good, false,
  "spit poison",

  {"You can spit poison.",
   "You can exhale a cloud of poison.",
   ""},

  {"There is a nasty taste in your mouth for a moment.",
   "There is a nasty taste in your mouth for a moment.",
   ""},

  {"You feel an ache in your throat.",
   "You feel an ache in your throat.",
   ""},
},

#if TAG_MAJOR_VERSION == 34
{ MUT_BREATHE_FLAMES, 0, 3, mutflag::good, false,
  "breathe flames",

  {"You can breathe flames.",
   "You can breathe fire.",
   "You can breathe blasts of fire."},

  {"Your throat feels hot.",
   "Your throat feels hot.",
   "Your throat feels hot."},

  {"A chill runs up and down your throat.",
   "A chill runs up and down your throat.",
   "A chill runs up and down your throat."},
},
#endif

{ MUT_BLINK, 3, 1, mutflag::good, false,
  "blink",

  {"You can translocate small distances at will.", "", ""},
  {"You feel jittery.", "", ""},
  {"You no longer feel jittery.", "", ""},
},

{ MUT_SHOUTITUS, 6, 1, mutflag::bad | mutflag::xom, false,
  "shoutitus",

  {"You frequently shout uncontrollably at your foes.", "", ""},
  {"You feel a strong urge to shout.", "", ""},
  {"Your urge to shout disappears.", "", ""},
},

{ MUT_CLARITY, 6, 1, mutflag::good, false,
  "clarity",

  {"You possess an exceptional clarity of mind.", "", ""},
  {"Your thoughts seem clearer.", "", ""},
  {"Your thinking seems confused.", "", ""},
},

{ MUT_BERSERK, 7, 1, mutflag::bad, false,
  "berserkitis",

  {"You have an uncontrollable temper.", "", ""},
  {"You feel a little pissed off.", "", ""},
  {"You feel calm.", "", ""},
},

{ MUT_DETERIORATION, 10, 1, mutflag::bad | mutflag::xom, false,
  "deterioration",

  {"Your body often falls apart upon taking damage.", "", ""},
  {"You feel your body start to fall apart.", "", ""},
  {"Your body feels more substantial.", "", ""},
},

{ MUT_IMPAIRED_VISION, 10, 1, mutflag::bad | mutflag::xom, false,
  "impaired vision",

  {"Your poor vision makes scrolls take longer to read and aiming more difficult.", "", ""},
  {"Your vision dulls.", "", ""},
  {"Your vision sharpens.", "", ""},
},

{ MUT_MUTATION_RESISTANCE, 4, 3, mutflag::good, false,
  "mutation resistance",

  {"You are somewhat resistant to further mutation.",
   "You are somewhat resistant to both further mutation and mutation removal.",
   "You are almost entirely resistant to further mutation and mutation removal."},

  {"You feel genetically stable.",
   "You feel genetically stable.",
   "You feel genetically immutable."},

  {"You feel genetically unstable.",
   "You feel genetically unstable.",
   "You feel genetically unstable."},
},

{ MUT_EVOLUTION, 4, 2, mutflag::good, false,
  "evolution",

  {"You evolve.",
   "You rapidly evolve.",
   ""},

  {"You feel nature experimenting on you. Don't worry, failures die fast.",
   "Your genes go into a fast flux.",
   ""},

  {"Nature stops experimenting on you.",
   "Your wild genetic ride slows down.",
   ""},
},

{ MUT_FRAIL, 10, 3, mutflag::bad | mutflag::xom, false,
  "frail",

  {"You are frail. (-10% HP)",
   "You are very frail. (-20% HP)",
   "You are extremely frail. (-30% HP)"},

  {"You feel frail.",
   "You feel frail.",
   "You feel frail."},

  {"You feel robust.",
   "You feel robust.",
   "You feel robust."},
},

{ MUT_ROBUST, 5, 3, mutflag::good, false,
  "robust",

  {"You are robust. (+10% HP)",
   "You are very robust. (+20% HP)",
   "You are extremely robust. (+30% HP)"},

  {"You feel robust.",
   "You feel robust.",
   "You feel robust."},

  {"You feel frail.",
   "You feel frail.",
   "You feel frail."},
},

{ MUT_UNBREATHING, 0, 1, mutflag::good, true,
  "unbreathing",

  {"You can survive without breathing.", "", ""},
  {"You feel breathless.", "", ""},
  {"", "", ""},
},

{ MUT_UNBREATHING_FORM, 0, 1, mutflag::good, false,
    "unbreathing",

   { "You can survive without breathing.", "", "" },
   { "You feel breathless.", "", "" },
   { "", "", "" },
},

{ MUT_TORMENT_RESISTANCE, 0, 1, mutflag::good, false,
  "torment resistance",

  {"You are immune to unholy pain and torment.", "", ""},
  {"You feel a strange anaesthesia.", "", ""},
  {"", "", ""},
},

{ MUT_NEGATIVE_ENERGY_RESISTANCE, 0, 3, mutflag::good, false,
  "negative energy resistance",

  {"You resist negative energy. (rN+)",
   "You are quite resistant to negative energy. (rN++)",
   "You are immune to negative energy. (rN+++)"},

  {"You feel resistant to negative energy.",
   "You feel more resistant to negative energy.",
   "You feel more resistant to negative energy."},

  {"", "", ""},
},

{ MUT_NECRO_ENHANCER, 0, 2, mutflag::good, false,
  "in touch with death",

  {"You are in touch with the powers of death.",
   "You are strongly in touch with the powers of death.",
   ""},

  {"You feel more in touch with the powers of death.",
   "You feel more in touch with the powers of death.",
   ""},

  {"", "", ""},
},

{ MUT_TENGU_FLIGHT, 0, 1, mutflag::good, false,
  "able to fly",

  {"You can fly continuously.", "", ""},
  {"You have gained the ability to fly.", "", ""},
  {"", "", ""},
},

{ MUT_HURL_HELLFIRE, 0, 1, mutflag::good, false,
  "hellfire blast",

  {"You can hurl blasts of hellfire.", "", ""},
  {"You smell a hint of brimstone.", "", ""},
  {"", "", ""},
},

// body-slot facets
{ MUT_HORNS, 7, 1, mutflag::good, true,
  "horns",

  {"You have a pair of horns on your head.", "", ""},
  {"A pair of horns grows on your head!", "", ""},
  {"The horns on your head fall off.", "", ""},
},

{ MUT_BEAK, 1, 1, mutflag::good, true,
  "beak",

  {"You have a beak for a mouth.", "", ""},
  {"Your mouth lengthens and hardens into a beak!", "", ""},
  {"Your beak shortens and softens into a mouth.", "", ""},
},

{ MUT_CLAWS, 2, 3, mutflag::good, true,
  "claws",

  {"You have sharp fingernails. (+2 Unarmed)",
   "You have very sharp fingernails. (+4 Unarmed)",
   "You have claws for hands. (+6 Unarmed)"},

  {"Your fingernails lengthen.",
   "Your fingernails sharpen.",
   "Your hands twist into claws."},

  {"Your fingernails shrink to normal size.",
   "Your fingernails look duller.",
   "Your hands feel fleshier."},
},

{ MUT_FANGS, 1, 1, mutflag::good, true,
  "fangs",

  {"You have razor-sharp fangs.", "", ""},
  {"Your teeth extend into long, razor-sharp fangs."},
  {"Your teeth shrink to normal size.", "", ""},
},

{ MUT_HOOVES, 5, 1, mutflag::good, true,
  "hooves",

  {"You have hooves in place of feet.", "", ""},
  {"Your feet thicken and reform into hooves.", "", ""},
  {"Your hooves expand and flesh out into feet!", "", ""},
},

{ MUT_ANTENNAE, 4, 1, mutflag::good, true,
  "antennae",

  {"You have a pair of antennae on your head. (+Vis)", "", ""},
  {"A pair of antennae grows on your head!", "", ""},
  {"The antennae on your head shrink away.", "", ""},
},

{ MUT_TALONS, 5, 1, mutflag::good, true,
  "talons",

  {"You have razor-sharp talons for feet.", "", ""},
  {"Your feet stretch into talons.", "", ""},
  {"Your talons dull and shrink into feet.", "", ""},
},

// Octopode only
{ MUT_TENTACLE_SPIKE, 10, 1, mutflag::good, true,
  "tentacle spike",

  {"One of your tentacles bears a large vicious spike.", "", ""},
  {"One of your lower tentacles grows a large vicious spike.", "", ""},
  {"Your tentacle spike disappears.", "", ""},
},

{ MUT_CONSTRICTING_TAIL, 0, 1, mutflag::good, true,
  "constrict 1",

  {"You can use your snake-like lower body to constrict enemies.", "", ""},
  {"Your tail grows strong enough to constrict your enemies.", "", ""},
  {"", "", ""},
},

// Naga and Draconian only
{ MUT_STINGER, 8, 3, mutflag::good, true,
  "stinger",

  {"Your tail ends in a poisonous barb.",
   "Your tail ends in a sharp poisonous barb.",
   "Your tail ends in a wickedly sharp and poisonous barb."},

  {"A poisonous barb forms on the end of your tail.",
   "The barb on your tail looks sharper.",
   "The barb on your tail looks very sharp."},

  {"The barb on your tail disappears.",
   "The barb on your tail seems less sharp.",
   "The barb on your tail seems less sharp."},
},

// Draconian only
{ MUT_BIG_WINGS, 4, 1, mutflag::good, true,
  "big wings",

  {"Your large and strong wings let you fly indefinitely.", "", ""},
  {"Your wings grow larger and stronger.", "", ""},
  {"Your wings shrivel and weaken.", "", ""},
},

// species-dependent innate mutations
{ MUT_ROT_IMMUNITY, 0, 1, mutflag::good, false,
  "rot immunity",

  {"You are immune to rotting.", "", ""},
  {"You feel immune to rotting.", "", ""},
  {"You feel vulnerable to rotting.", "", ""},
},

{ MUT_GOURMAND, 0, 1, mutflag::good, false,
  "gourmand",

  {"You like to eat raw meat.", "", ""},
  {"", "", ""},
  {"", "", ""},
},

{ MUT_HOP, 0, 2, mutflag::good, true,
  "strong legs",

  {"You can hop short distances.",
   "You can hop long distances.", ""},

  {"", "Your legs feel stronger.", ""},
  {"", "", ""},
},

{ MUT_HIGH_MAGIC, 2, 2, mutflag::good, false,
  "high mp",

  {"You have an increased reservoir of magic. (+15% MP)",
   "You have a greatly increased reservoir of magic. (+30% MP)", ""},

  {"You feel more energetic.",
   "You feel more energetic.", ""},

  {"You feel less energetic.",
   "You feel less energetic.", ""},
},

{ MUT_LOW_MAGIC, 9, 2, mutflag::bad, false,
  "low mp",

  {"Your magical capacity is low. (-15% MP)",
   "Your magical capacity is very low. (-30% MP)", ""},

  {"You feel less energetic.",
   "You feel less energetic.", ""},

  {"You feel more energetic.",
   "You feel more energetic.", ""},
},

{ MUT_WILD_MAGIC, 6, 1, mutflag::good, false,
  "wild magic",

  {"Your spells are harder to cast, but more powerful.", "", ""},
  {"You feel your magical power running wild!", "", ""},
  {"You regain control of your magic.", "", ""},
},

{ MUT_SUBDUED_MAGIC, 6, 1, mutflag::bad, false,
  "subdued magic",

  {"Your spells are easier to cast, but less powerful.", "", ""},
  {"Your connection to magic feels dormant.", "", ""},
  {"Your magic regains its normal vibrancy.", "", ""},
},

{ MUT_FORLORN, 0, 1, mutflag::bad, false,
  "forlorn",

  {"You have difficulty communicating with the divine.","",""},
  {"You feel forlorn.","",""},
  {"You feel more spiritual.","",""},
},

{ MUT_STOCHASTIC_TORMENT_RESISTANCE, 0, 1, mutflag::good, false,
  "50% torment resistance",

  {"You are somewhat able to resist unholy torments (1 in 2 success).","",""},
  {"You feel a strange anaesthesia.", "", ""},
  {"", "", ""},
},

{ MUT_PASSIVE_MAPPING, 3, 1, mutflag::good, false,
  "sense surroundings",

  {"You passively map the area around you.", "", ""},
  {"You feel a strange attunement to the structure of the dungeons.", "", ""},
  {"You feel disoriented.", "", ""},
},

{ MUT_ICEMAIL, 0, 1, mutflag::good, false,
  "icemail",

  {"A meltable icy envelope protects you from harm. (AC +", "", ""},
  {"An icy envelope takes form around you.", "", ""},
  {"", "", ""},
},

{ MUT_PASSIVE_FREEZE, 0, 1, mutflag::good, false,
  "passive freeze",

  {"A frigid envelope surrounds you and freezes all who hurt you.", "", ""},
  {"Your skin feels very cold.", "", ""},
  {"", "", ""},
},

{ MUT_NIGHTSTALKER, 0, 3, mutflag::good, false,
  "nightstalker",

  {"You are slightly more attuned to the shadows.",
   "You are significantly more attuned to the shadows.",
   "You are completely attuned to the shadows."},

  {"You slip into the darkness of the dungeon.",
   "You slip further into the darkness.",
   "You are surrounded by darkness."},

  {"Your affinity for the darkness vanishes.",
   "Your affinity for the darkness weakens.",
   "Your affinity for the darkness weakens."},
},

{ MUT_SPINY, 0, 3, mutflag::good, true,
  "spiny",

  {"You are partially covered in sharp spines.",
   "You are mostly covered in sharp spines.",
   "You are completely covered in sharp spines."},

  {"Sharp spines emerge from parts of your body.",
   "Sharp spines emerge from more of your body.",
   "Sharp spines emerge from your entire body."},

  {"Your sharp spines disappear entirely.",
   "Your sharp spines retract somewhat.",
   "Your sharp spines retract somewhat."},
},

{ MUT_POWERED_BY_DEATH, 0, 3, mutflag::good, false,
  "powered by death",

  {"You regenerate a little health from kills.",
   "You regenerate health from kills.",
   "You regenerate a lot of health from kills."},

  {"A wave of death washes over you.",
   "The wave of death grows in power.",
   "The wave of death grows in power."},

  {"Your control of surrounding life forces is gone.",
   "Your control of surrounding life forces weakens.",
   "Your control of surrounding life forces weakens."},
},

{ MUT_POWERED_BY_PAIN, 0, 3, mutflag::good, false,
  "powered by pain",

  {"You sometimes gain a little power by taking damage.",
   "You sometimes gain power by taking damage.",
   "You are powered by pain."},

  {"You feel energised by your suffering.",
   "You feel even more energised by your suffering.",
   "You feel completely energised by your suffering."},

  {"", "", ""},
},

{ MUT_AUGMENTATION, 0, 3, mutflag::good, false,
  "augmentation",

  {"Your magical and physical power is slightly enhanced at high health.",
   "Your magical and physical power is enhanced at high health.",
   "Your magical and physical power is greatly enhanced at high health."},

  {"You feel power flowing into your body.",
   "You feel power rushing into your body.",
   "You feel saturated with power."},

  {"", "", ""},
},

{ MUT_MANA_SHIELD, 0, 1, mutflag::good, false,
  "magic shield",

  {"When hurt, damage is shared between your health and your magic reserves.", "", ""},
  {"You feel your magical essence form a protective shroud around your flesh.", "", ""},
  {"", "", ""},
},

{ MUT_MANA_REGENERATION, 0, 1, mutflag::good, false,
  "magic regeneration",

  {"You regenerate magic rapidly.", "", ""},
  {"You feel your magic shroud grow more resilient.", "", ""},
  {"", "", ""},
},

{ MUT_MANA_LINK, 0, 1, mutflag::good, false,
  "magic link",

  {"When low on magic, you restore magic in place of health.", "", ""},
  {"You feel your life force and your magical essence meld.", "", ""},
  {"", "", ""},
},

// Jiyva only mutations
{ MUT_SLIME, 0, 3, mutflag::good | mutflag::jiyva, true,
  "slime",

  {"Your slimy body is resistant to acid. (rCorr)",
   "Your oozing form is resistant to acid. (rCorr)\n"
   "You regenerate health quickly. (Regen)",
   "Your gelatinous form is immune to acid, constriction and sticky flames. (rCorr+, Slime)\n"
   "You regenerate health and magic quickly. (Regen, MPRegen)"},

  {"You feel more slimy.",
   "You feel very pliable.",
   "Your body melts completely into viscous ooze."},

  {"You resolidify.",
   "Your body stops oozing.",
   "Your body becomes less slimy."},
},

{ MUT_PROTOPLASM, 0, 3, mutflag::good | mutflag::jiyva, true,
  "watery protoplasm",

  {"Your watery protoplasm protects you from the cold. (rC+)",
   "Your watery protoplasm protects you from extremes of temperature. (rF+, rC+)",
   "Your watery protoplasm protects you from extremes of temperature. (rF+, rC+)\n"
   "When hit by a fiery attack, your protoplasm may erupt scalding steam."},

  {"A vacuole full of water envelops your skin.",
   "Your protoplasm gets thicker and waterier.",
   "Your protoplasm oozes water."},

  {"Your protoplasm dries out and turns into skin.",
   "Your protoplasm feels drier.",
   "Your protoplasm feels drier."},
},

// "You breathe through your skin. (rCloud, rDrown)"

{ MUT_GOLDEN_EYEBALLS, 0, 3, mutflag::good | mutflag::jiyva, true,
  "golden eyeballs",

  {"Your body has grown golden eyes which may confuse attackers. (+Vis)",
   "Your body has grown many golden eyes which increase your resistance against hostile enchantments and may confuse attackers. (+Vis, MR+)",
   "Your body is covered in golden eyes which increase your resistance against hostile enchantments and may confuse attackers. (++Vis, MR++)"},

  {"Golden eyeballs grow over part of your body.",
   "Golden eyeballs cover a large portion of your body.",
   "Golden eyeballs cover you completely."},

  {"The eyeballs on your body disappear.",
   "The eyeballs on your body recede somewhat.",
   "The eyeballs on your body recede somewhat."},
},

{ MUT_TRANSLUCENT_SKIN, 0, 3, mutflag::good | mutflag::jiyva, true,
  "translucent skin",

  {"Your translucent skin slightly reduces your foes' accuracy. (Stealth+)",
   "Your translucent skin reduces your foes' accuracy. (Stealth++)",
   "Your transparent skin significantly reduces your foes' accuracy. (Stealth+++)\n"
   "You may expend some of your HP to become completely invisible, without magical contamination. (+Inv)"},

  {"Your skin becomes partially translucent.",
   "Your skin becomes more translucent.",
   "Your skin becomes completely transparent."},

  {"Your skin returns to its normal opacity.",
   "Your skin's translucency fades.",
   "Your skin's transparency fades."},
},

{ MUT_PSEUDOPODS, 0, 1, mutflag::good | mutflag::jiyva, true,
  " pseudopods",

  {" pseudopods extend from your body and strike at your foes", "", ""},
  {" pseudopods emerge from your body.", "", ""},
  {"Your pseudopods retract into your body.", "", ""},
},

{ MUT_TENDRILS, 0, 1, mutflag::good | mutflag::jiyva, false,
  "tendrils",

  {"A pair of whip-like tendrils extend from your body. You may wear an extra ring on each.", "", ""},
  {"Tendrils emerge from you body.", "", ""},
  {"Your tendrils retract into your body.", "", ""},
},

{ MUT_CYTOPLASMIC_SUSPENSION, 0, 1, mutflag::good | mutflag::jiyva, false, 
  "cytoplasmic subsumption",

  {"You may subsume any weapon, armour, or jewellery into your cytoplasm to benefit from its magical properties.", "", ""},
  {"A cavity forms in the center of your cytoplasm, in which you can subsume an item.", "", ""},
  {"Your cytoplasm can no longer hold an extra item.", "", ""},
},

{ MUT_ARM_MORPH, 0, 1, mutflag::good | mutflag::jiyva, true, 
  "morphing arms",

  {"Your arms can morph in size from ridiculously small and thin to oversized and top-heavy.\n You may wield any weapon or shield, one-handed; including those normally too large or small for you.", "", ""},
  {"Your arms become more pliable.", "", ""},
  {"Your arms return to their normal size.", "", ""},
},

{ MUT_GELATINOUS_TAIL, 0, 1, mutflag::good | mutflag::jiyva, true, 
  "gelatinous tail, constrict 1",

  {"Your gelatinous tail can morph to fit any barding and constrict a single enemy in combat.", "", ""},
  {"You grow a massive gelatinous, serpentine tail.", "", ""},
  {"Your tail shrinks ", "", ""},
},

{ MUT_MISSILE_GUARD, 0, 1, mutflag::good | mutflag::jiyva, false, 
  "missile-eating ooze (DMsl+)",

  {"You are covered in a sticky ooze that may intercept and inject missiles aimed at you. (DMsl+)", "", ""},
  {"You exude a sticky ooze from your skin.", "", ""},
  {"The ooze on your skin dries up and flakes away.", "", ""},
},

{ MUT_RADIOSYNTHESIS, 0, 3, mutflag::good | mutflag::jiyva, false,
  "radiosynthesis",

  {"You don't mutate from contamination; you become a little more contaminated while casting spells.", 
   "You regenerate faster while glowing and aren't malmutated by magical radiation; you become more contaminated while casting spells.", 
   "You always glow, regenerate faster the more magical radiation you absorb and cannot be malmutated by radiation; you become much more contaminated while casting spells."},
  {"You feel connected to magical radiation.", 
   "You begin to regenerate faster while glowing.", 
   "You feel like bathing in mutagenic glow."},
  {"Your connection to the glow disappears completely.",
   "Your connection to magical radiation recedes.",
   "Your connection to magical radiation recedes."},
},

{ MUT_ACIDIC_BITE, 0, 1, mutflag::good | mutflag::jiyva, true,
  "acidic bite",

  {"You have acidic saliva.", "", ""},
  {"Acid begins to drip from your mouth.", "", ""},
  {"Your mouth feels dry.", "", ""},
},

{ MUT_ANTIMAGIC_BITE, 0, 1, mutflag::good, true,
  "antimagic bite",

  {"Your bite disrupts and absorbs the magic of your enemies.", "", ""},
  {"You feel a sudden thirst for magic.", "", ""},
  {"Your magical appetite wanes.", "", ""},
},

{ MUT_NO_POTION_HEAL, 3, 3, mutflag::bad, false,
  "no potion heal",

  {"Potions are less effective at restoring your health.",
   "Potions are poor at restoring your health.",
   "Potions cannot restore your health."},

  {"Your system partially rejects the healing effects of potions.",
   "Your system mostly rejects the healing effects of potions.",
   "Your system completely rejects the healing effects of potions."},

  {"Your system completely accepts the healing effects of potions.",
   "Your system mostly accepts the healing effects of potions.",
   "Your system partly accepts the healing effects of potions."},
},

// Scale mutations
{ MUT_DISTORTION_FIELD, 2, 3, mutflag::good, false,
  "repulsion field",

  {"You are surrounded by a mild repulsion field. (EV +2)",
   "You are surrounded by a moderate repulsion field. (EV +3)",
   "You are surrounded by a strong repulsion field. (EV +4, RMsl)"},

  {"You begin to radiate repulsive energy.",
   "Your repulsive radiation grows stronger.",
   "Your repulsive radiation grows stronger."},

  {"You feel less repulsive.",
   "You feel less repulsive.",
   "You feel less repulsive."},
},

{ MUT_ICY_BLUE_SCALES, 2, 3, mutflag::good, true,
  "icy blue scales",

  {"You are partially covered in icy blue scales. (AC +2)",
   "You are mostly covered in icy blue scales. (AC +3)",
   "You are completely covered in icy blue scales. (AC +4, rC+)"},

  {"Icy blue scales grow over part of your body.",
   "Icy blue scales spread over more of your body.",
   "Icy blue scales cover your body completely."},

  {"Your icy blue scales disappear.",
   "Your icy blue scales recede somewhat.",
   "Your icy blue scales recede somewhat."},
},

{ MUT_IRIDESCENT_SCALES, 2, 3, mutflag::good, true,
  "iridescent scales",

  {"You are partially covered in iridescent scales. (AC +2)",
   "You are mostly covered in iridescent scales. (AC +4)",
   "You are completely covered in iridescent scales. (AC +6)"},

  {"Iridescent scales grow over part of your body.",
   "Iridescent scales spread over more of your body.",
   "Iridescent scales cover your body completely."},

  {"Your iridescent scales disappear.",
   "Your iridescent scales recede somewhat.",
   "Your iridescent scales recede somewhat."},
},

{ MUT_LARGE_BONE_PLATES, 2, 3, mutflag::good, true,
  "large bone plates",

  {"You are partially covered in large bone plates. (SH +4)",
   "You are mostly covered in large bone plates. (SH +6)",
   "You are completely covered in large bone plates. (SH +8)"},

  {"Large bone plates grow over parts of your arms.",
   "Large bone plates spread over more of your arms.",
   "Large bone plates cover your arms completely."},

  {"Your large bone plates disappear.",
   "Your large bone plates recede somewhat.",
   "Your large bone plates recede somewhat."},
},

{ MUT_MOLTEN_SCALES, 2, 3, mutflag::good, true,
  "molten scales",

  {"You are partially covered in molten scales. (AC +2)",
   "You are mostly covered in molten scales. (AC +3)",
   "You are completely covered in molten scales. (AC +4, rF+)"},

  {"Molten scales grow over part of your body.",
   "Molten scales spread over more of your body.",
   "Molten scales cover your body completely."},

  {"Your molten scales disappear.",
   "Your molten scales recede somewhat.",
   "Your molten scales recede somewhat."},
},

#if TAG_MAJOR_VERSION == 34
{ MUT_ROUGH_BLACK_SCALES, 0, 3, mutflag::good, true,
  "rough black scales",

  {"You are partially covered in rough black scales. (AC +2, Dex -1)",
   "You are mostly covered in rough black scales. (AC +5, Dex -2)",
   "You are completely covered in rough black scales. (AC +8, Dex -3)"},

  {"Rough black scales grow over part of your body.",
   "Rough black scales spread over more of your body.",
   "Rough black scales cover your body completely."},

  {"Your rough black scales disappear.",
   "Your rough black scales recede somewhat.",
   "Your rough black scales recede somewhat."},
},
#endif

{ MUT_RUGGED_BROWN_SCALES, 2, 3, mutflag::good, true,
  "rugged brown scales",

  {"You are partially covered in rugged brown scales. (AC +1, +3% HP)",
   "You are mostly covered in rugged brown scales. (AC +2, +5% HP)",
   "You are completely covered in rugged brown scales. (AC +3, +7% HP)"},

  {"Rugged brown scales grow over part of your body.",
   "Rugged brown scales spread over more of your body.",
   "Rugged brown scales cover your body completely."},

  {"Your rugged brown scales disappear.",
   "Your rugged brown scales recede somewhat.",
   "Your rugged brown scales recede somewhat."},
},

{ MUT_SLIMY_GREEN_SCALES, 2, 3, mutflag::good, true,
  "slimy green scales",

  {"You are partially covered in slimy green scales. (AC +2)",
   "You are mostly covered in slimy green scales. (AC +3)",
   "You are completely covered in slimy green scales. (AC +4, rPois)"},

  {"Slimy green scales grow over part of your body.",
   "Slimy green scales spread over more of your body.",
   "Slimy green scales cover your body completely."},

  {"Your slimy green scales disappear.",
   "Your slimy green scales recede somewhat.",
   "Your slimy green scales recede somewhat."},
},

{ MUT_THIN_METALLIC_SCALES, 2, 3, mutflag::good, true,
  "thin metallic scales",

  {"You are partially covered in thin metallic scales. (AC +2)",
   "You are mostly covered in thin metallic scales. (AC +3)",
   "You are completely covered in thin metallic scales. (AC +4, rElec)"},

  {"Thin metallic scales grow over part of your body.",
   "Thin metallic scales spread over more of your body.",
   "Thin metallic scales cover your body completely."},

  {"Your thin metallic scales disappear.",
   "Your thin metallic scales recede somewhat.",
   "Your thin metallic scales recede somewhat."},
},

{ MUT_THIN_SKELETAL_STRUCTURE, 2, 3, mutflag::good, false,
  "thin skeletal structure",

  {"You have a somewhat thin skeletal structure. (Dex +2, Stealth)",
   "You have a moderately thin skeletal structure. (Dex +4, Stealth+)",
   "You have an unnaturally thin skeletal structure. (Dex +6, Stealth++)"},

  {"Your bones become slightly less dense.",
   "Your bones become somewhat less dense.",
   "Your bones become less dense."},

  {"Your skeletal structure returns to normal.",
   "Your skeletal structure densifies.",
   "Your skeletal structure densifies."},
},

{ MUT_YELLOW_SCALES, 2, 3, mutflag::good, true,
  "yellow scales",

  {"You are partially covered in yellow scales. (AC +2)",
   "You are mostly covered in yellow scales. (AC +3)",
   "You are completely covered in yellow scales. (AC +4, rCorr)"},

  {"Yellow scales grow over part of your body.",
   "Yellow scales spread over more of your body.",
   "Yellow scales cover your body completely."},

  {"Your yellow scales disappear.",
   "Your yellow scales recede somewhat.",
   "Your yellow scales recede somewhat."},
},

{ MUT_STURDY_FRAME, 2, 3, mutflag::good, true,
  "sturdy frame",

  {"Your movements are slightly less encumbered by armour. (ER -2)",
   "Your movements are less encumbered by armour. (ER -4)",
   "Your movements are significantly less encumbered by armour. (ER -6)"},

  {"You feel less encumbered by your armour.",
   "You feel less encumbered by your armour.",
   "You feel less encumbered by your armour."},

  {"You feel more encumbered by your armour.",
   "You feel more encumbered by your armour.",
   "You feel more encumbered by your armour."},
},

{ MUT_SANGUINE_ARMOUR, 0, 3, mutflag::good, false,
  "sanguine armour",

  {"When seriously injured, your bleeding wounds create armour. (AC +",
   "When seriously injured, your bleeding wounds create thick armour. (AC +",
   "When seriously injured, your bleeding wounds create very thick armour. (AC +"},

  {"You feel your blood ready itself to protect you.",
   "You feel your blood thicken.",
   "You feel your blood thicken."},

  {"You feel your blood become entirely quiescent.",
   "You feel your blood thin.",
   "You feel your blood thin."},
},

// Draconian rework mutations all the messaging on these is done specially.
{ MUT_MINOR_MARTIAL_APT_BOOST, 0, 1, mutflag::good, false,
   "minor martial skill boost",
    
  {"You are naturally skilled at ", "", ""},
  {"Your draconian ancestry asserts itself.", "", ""},
  {"", "", ""},
},

{ MUT_MAJOR_MARTIAL_APT_BOOST, 0, 2, mutflag::good, false,
   "major martial skill boost",

  { "You are naturally skilled at ", "You are naturally adept at ", "" },
  { "Your draconian ancestry asserts itself.", "Your draconian ancestry asserts itself.", "" },
  {"", "", ""},
},

{ MUT_DRACONIAN_ENHANCER, 0, 2, mutflag::good, true,
  "draconian enhancer",

  { "You are in touch with the powers of ",
    "You are strongly in touch with the powers of ", ""},
  { "You become more in touch with the powers of ", "You become more in touch with the powers of ", ""},
  { "", "", ""},
},

{ MUT_DRACONIAN_DEFENSE, 0, 1, mutflag::good, true,
  "draconian defense",

  { "", "", ""},
  { "", "", ""},
  { "", "", ""},
},

{ MUT_DEFENSIVE_APT_BOOST, 0, 1, mutflag::good, false,
   "defensive skill boost",
    
  {"You are naturally skilled at ", "", ""},
  {"Your draconian ancestry asserts itself.", "", ""},
  {"", "", ""},
},

{ MUT_CAMOUFLAGE, 1, 2, mutflag::good, true,
  "camouflage",

  {"Your skin changes colour to match your surroundings (Stealth++).",
   "Your skin perfectly mimics your surroundings (Stealth++++)).", ""},

  {"Your skin functions as natural camouflage.",
   "Your natural camouflage becomes more effective.", ""},

  {"Your skin no longer functions as natural camouflage.",
   "Your natural camouflage becomes less effective.", ""},
},

{ MUT_IGNITE_BLOOD, 0, 1, mutflag::good, false,
  "ignite blood",

  {"Your demonic aura causes spilled blood to erupt in flames.", "", ""},
  {"Your blood runs red-hot!", "", ""},
  {"", "", ""},
},

{ MUT_FOUL_STENCH, 0, 2, mutflag::good, false,
  "foul stench",

  {"You may emit foul miasma when damaged in melee.",
   "You frequently emit foul miasma when damaged in melee.",
   ""},

  {"You begin to emit a foul stench of rot and decay.",
   "You begin to radiate miasma.",
   ""},

  {"", "", ""},
},

{ MUT_PETRIFICATION_RESISTANCE, 0, 1, mutflag::good, false,
  "petrification resistance",

  {"You are immune to petrification.", "", ""},
  {"Your body vibrates.", "", ""},
  {"You briefly stop moving.", "", ""},
},

#if TAG_MAJOR_VERSION == 34
{ MUT_TRAMPLE_RESISTANCE, 0, 1, mutflag::good, false,
  "trample resistance",

  {"You are resistant to trampling.", "", ""},
  {"You feel steady.", "", ""},
  {"You feel unsteady..", "", ""},
},

{ MUT_CLING, 0, 1, mutflag::good, true,
  "cling",

  {"You can cling to walls.", "", ""},
  {"You feel sticky.", "", ""},
  {"You feel slippery.", "", ""},
},
#endif

{ MUT_BLACK_MARK, 0, 1, mutflag::good, false,
  "black mark",

  {"Your melee attacks may debilitate your foes.", "", ""},
  {"An ominous black mark forms on your body.", "", ""},
  {"", "", ""},
},

{ MUT_COLD_BLOODED, 0, 1, mutflag::bad, true,
  "cold-blooded",

  {"You are cold-blooded and may be slowed by cold attacks.", "", ""},
  {"You feel cold-blooded.", "", ""},
  {"You feel warm-blooded.", "", ""},
},

{ MUT_FLAME_CLOUD_IMMUNITY, 0, 1, mutflag::good, false,
  "flame cloud immunity",

  {"You are immune to clouds of flame.", "", ""},
  {"You feel less concerned about heat.", "", ""},
  {"", "", ""},
},

{ MUT_FREEZING_CLOUD_IMMUNITY, 0, 1, mutflag::good, false,
  "freezing cloud immunity",

  {"You are immune to freezing clouds.", "", ""},
  {"You feel less concerned about cold.", "", ""},
  {"", "", ""},
},

{ MUT_NO_DRINK, 0, 1, mutflag::bad, false,
  "inability to drink while threatened",

  {"You cannot drink potions while threatened.", "", ""},
  {"You no longer can drink potions while threatened.", "", ""},
  {"You can once more drink potions while threatened.", "", ""},
},

{ MUT_NO_READ, 0, 1, mutflag::bad, false,
  "inability to read while threatened",

  {"You cannot read scrolls while threatened.", "", ""},
  {"You can no longer read scrolls while threatened.", "", ""},
  {"You can once more read scrolls while threatened.", "", ""},
},

{ MUT_MISSING_HAND, 0, 1, mutflag::bad, false,
  "missing a hand",

  {"You are missing a hand.", "", ""},
  {"One of your hands has vanished, leaving only a stump!", "", ""},
  {"Your stump has regrown into a hand!", "", ""},
},

{ MUT_NO_STEALTH, 0, 1, mutflag::bad, false,
  "no stealth",

  {"You cannot be stealthy.", "", ""},
  {"You can no longer be stealthy.", "", ""},
  {"You can once more be stealthy.", "", ""},
},

{ MUT_NO_ARTIFICE, 0, 1, mutflag::bad, false,
  "inability to use devices",

  {"You cannot study or use magical devices.", "", ""},
  {"You can no longer study or use magical devices.", "", ""},
  {"You can once more study and use magical devices.", "", ""},
},

{ MUT_NO_LOVE, 0, 1, mutflag::bad, false,
  "hated by all",

  {"You are hated by all.", "", ""},
  {"You are now hated by all.", "", ""},
  {"You are no longer hated by all.", "", ""},
},

{ MUT_COWARDICE, 0, 1, mutflag::bad, false,
  "cowardly",

  {"Your cowardice makes you less effective in combat with threatening monsters.", "", ""},
  {"You have lost your courage.", "", ""},
  {"You have regained your courage.", "", ""},
},

{ MUT_NO_DODGING, 0, 1, mutflag::bad, false,
  "inability to train dodging",

  {"You cannot train Dodging skill.", "", ""},
  {"You can no longer train Dodging skill.", "", ""},
  {"You can once more train Dodging skill.", "", ""},
},

{ MUT_NO_ARMOUR, 0, 1, mutflag::bad, false,
  "inability to train armour",

  {"You cannot train Armour skill.", "", ""},
  {"You can no longer train Armour skill.", "", ""},
  {"You can once more train Armour skill.", "", ""},
},

{ MUT_NO_AIR_MAGIC, 0, 1, mutflag::bad, false,
  "no air magic",

  {"You cannot study or cast Air magic.", "", ""},
  {"You can no longer study or cast Air magic.", "", ""},
  {"You can once more study and cast Air magic.", "", ""},
},

{ MUT_NO_CHARM_MAGIC, 0, 1, mutflag::bad, false,
  "no charms magic",

  {"You cannot study or cast Charms magic.", "", ""},
  {"You can no longer study or cast Charms magic.", "", ""},
  {"You can once more study and cast Charms magic.", "", ""},
},

{ MUT_NO_EARTH_MAGIC, 0, 1, mutflag::bad, false,
  "no earth magic",

  {"You cannot study or cast Earth magic.", "", ""},
  {"You can no longer study or cast Earth magic.", "", ""},
  {"You can once more study and cast Earth magic.", "", ""},
},

{ MUT_NO_FIRE_MAGIC, 0, 1, mutflag::bad, false,
  "no fire magic",

  {"You cannot study or cast Fire magic.", "", ""},
  {"You can no longer study or cast Fire magic.", "", ""},
  {"You can once more study and cast Fire magic.", "", ""},
},

{ MUT_NO_HEXES_MAGIC, 0, 1, mutflag::bad, false,
  "no hexes magic",

  {"You cannot study or cast Hexes magic.", "", ""},
  {"You can no longer study or cast Hexes magic.", "", ""},
  {"You can once more study and cast Hexes magic.", "", ""},
},

{ MUT_NO_ICE_MAGIC, 0, 1, mutflag::bad, false,
  "no ice magic",

  {"You cannot study or cast Ice magic.", "", ""},
  {"You can no longer study or cast Ice magic.", "", ""},
  {"You can once more study and cast Ice magic.", "", ""},
},

{ MUT_NO_NECROMANCY_MAGIC, 0, 1, mutflag::bad, false,
  "no necromancy magic",

  {"You cannot study or cast Necromancy magic.", "", ""},
  {"You can no longer study or cast Necromancy magic.", "", ""},
  {"You can once more study and cast Necromancy magic.", "", ""},
},

{ MUT_NO_POISON_MAGIC, 0, 1, mutflag::bad, false,
  "no poison magic",

  {"You cannot study or cast Poison magic.", "", ""},
  {"You can no longer study or cast Poison magic.", "", ""},
  {"You can once more study and cast Poison magic.", "", ""},
},

{ MUT_NO_SUMMONING_MAGIC, 0, 1, mutflag::bad, false,
  "no summoning magic",

  {"You cannot study or cast Summoning magic.", "", ""},
  {"You can no longer study or cast Summoning magic.", "", ""},
  {"You can once more study and cast Summoning magic.", "", ""},
},

{ MUT_NO_TRANSLOCATION_MAGIC, 0, 1, mutflag::bad, false,
  "no translocations magic",

  {"You cannot study or cast Translocations magic.", "", ""},
  {"You can no longer study or cast Translocations magic.", "", ""},
  {"You can once more study and cast Translocations magic.", "", ""},
},

{ MUT_NO_TRANSMUTATION_MAGIC, 0, 1, mutflag::bad, false,
  "no transmutations magic",

  {"You cannot study or cast Transmutations magic.", "", ""},
  {"You can no longer study or cast Transmutations magic.", "", ""},
  {"You can once more study and cast Transmutations magic.", "", ""},
},

{ MUT_PHYSICAL_VULNERABILITY, 0, 3, mutflag::bad, false,
  "reduced AC",

  {"You take slightly more damage. (AC -5)",
    "You take more damage. (AC -10)",
    "You take considerably more damage. (AC -15)"},
  {"You feel more vulnerable to harm.",
    "You feel more vulnerable to harm.",
    "You feel more vulnerable to harm."},
  {"You no longer feel extra vulnerable to harm.",
    "You feel less vulnerable to harm.",
    "You feel less vulnerable to harm."},
},

{ MUT_SLOW_REFLEXES, 0, 3, mutflag::bad, false,
  "reduced EV",

  {"You have somewhat slow reflexes. (EV -5)",
    "You have slow reflexes. (EV -10)",
    "You have very slow reflexes. (EV -15)"},
  {"Your reflexes slow.",
    "Your reflexes slow further.",
    "Your reflexes slow further."},
  {"You reflexes return to normal.",
    "You reflexes speed back up.",
    "You reflexes speed back up."},
},

{ MUT_MAGICAL_VULNERABILITY, 0, 3, mutflag::bad, false,
  "magic vulnerability",

  {"You are slightly vulnerable to magic. (MR-)",
    "You are vulnerable to magic. (MR--)",
    "You are extremely vulnerable to magic. (MR---)"},
  {"You feel vulnerable to magic.",
    "You feel more vulnerable to magic.",
    "You feel more vulnerable to magic."},
  {"You no longer feel vulnerable to magic.",
    "You feel less vulnerable to magic.",
    "You feel less vulnerable to magic."},
},

{ MUT_ANTI_WIZARDRY, 0, 3, mutflag::bad, false,
  "disrupted magic",

  {"Your casting is slightly disrupted.",
    "Your casting is disrupted.",
    "Your casting is seriously disrupted."},
  {"Your ability to control magic is disrupted.",
    "Your ability to control magic is more disrupted.",
    "Your ability to control magic is more disrupted."},
  {"Your ability to control magic is no longer disrupted.",
    "Your ability to control magic is less disrupted.",
    "Your ability to control magic is less disrupted."},
},

{ MUT_MP_WANDS, 7, 1, mutflag::good, false,
  "MP-powered wands",

  {"You expend magic power (3 MP) to strengthen your wands.", "", ""},
  {"You feel your magical essence link to the dungeon's wands.", "", ""},
  {"Your magical essence no longer links to wands of the dungeon.", "", ""},
},

{ MUT_UNSKILLED, 0, 3, mutflag::bad, false,
  "unskilled",

  {"You are somewhat unskilled. (-1 Apt)",
    "You are unskilled. (-2 Apt)",
    "You are extremely unskilled. (-3 Apt)"},
  {"You feel less skilled.",
    "You feel less skilled.",
    "You feel less skilled."},
  {"You regain all your skill.",
    "You regain some skill.",
    "You regain some skill."},
},

{ MUT_INEXPERIENCED, 0, 3, mutflag::bad, false,
    "inexperienced",

  {"You are somewhat inexperienced. (-2 XL)",
   "You are inexperienced. (-4 XL)",
   "You are extremely inexperienced. (-6 XL)"},
  {"You feel less experienced.",
   "You feel less experienced.",
   "You feel less experienced."},
  {"You regain all your potential.",
   "You regain some potential.",
   "You regain some potential."},
},

{ MUT_PAWS, 0, 1, mutflag::good, true,
  "sharp paws",

  {"Your sharp claws are effective at attacking unaware monsters.", "", ""},
  {"", "", ""},
  {"", "", ""},
},

{ MUT_MISSING_EYE, 0, 1, mutflag::bad, false,
  "missing an eye",

  {"You are missing an eye, making it more difficult to aim.", "", ""},
  {"Your right eye vanishes! The world loses its depth.", "", ""},
  {"Your right eye suddenly reappears! The world regains its depth.", "", ""},
},

{ MUT_TEMPERATURE_SENSITIVITY, 0, 1, mutflag::bad, false,
  "temperature sensitive",

  {"You are sensitive to extremes of temperature. (rF-, rC-)", "", ""},
  {"You feel sensitive to extremes of temperature.", "", ""},
  {"You no longer feel sensitive to extremes of temperature", "", ""},
},

{ MUT_NO_REGENERATION, 0, 1, mutflag::bad, false,
  "no regeneration",

  {"You do not regenerate.", "", ""},
  {"You stop regenerating.", "", ""},
  {"You start regenerating.", "", ""},
},

{ MUT_GODS_PITY, 0, 2, mutflag::good, false,
    "god's pity",

  { "The pity of the gods increases the power of your invoked divine abilities.",
    "The pity of the gods increases the power of your passive and invoked divine abilities.", "" },
  { "The dieties of the dungeon take pity on you.",
    "The dieties of the dungeon take greater pity upon you.", "" },
  { "The dieties treat you like any other subject.",
    "The pity of the gods is waning.", "" },
},

{ MUT_STRONG_NOSE, 0, 1, mutflag::good, false,
  "strong nose",

  {"Your uncanny sense of smell can sniff out nearby items.", "", ""},
  {"Your sense of smell grows stronger.", "", ""},
  {"Your sense of smell gets weaker.", "", ""},
},

{ MUT_SILENT_CAST, 0, 1, mutflag::good, false,
  "silent casting",

  { "You can communicate with gods and cast spells while silenced.", "", "" },
  { "You gain the power to cast without speech.", "", "" },
  { "Silence once again prevents your spellcasting.", "", "" },
},

{ MUT_INSUBSTANTIAL, 0, 1, mutflag::good, false,
  "insubstantial",

  { "Your insubstantial form boosts your evasion and grants immunity to sticky flames, nets and constriction.", "", "" },
  { "Your spirit separates from your body becoming a ghostly form.", "", "" },
      // BCADDNOTE: This only makes sense for the only race that currently gains this with level. If more races are given this with level revise/use mutation-messaging.
  { "You become solid.", "", "" },
},

{ MUT_ACID_RESISTANCE, 0, 1, mutflag::good, true,
  "acid resistance",

  {"You are resistant to acid. (rCorr)", "", ""},
  {"You feel resistant to acid.", "",  ""},
  {"You feel less resistant to acid.", "", ""},
},

};

static const mutation_category_def category_mut_data[] =
{
  { RANDOM_MUTATION, "any"},
  { RANDOM_XOM_MUTATION, "xom"},
  { RANDOM_GOOD_MUTATION, "good"},
  { RANDOM_BAD_MUTATION, "bad"},
  { RANDOM_SLIME_MUTATION, "jiyva"},
  { RANDOM_NON_SLIME_MUTATION, "nonslime"},
  { RANDOM_CORRUPT_MUTATION, "corrupt"},
  { RANDOM_QAZLAL_MUTATION, "qazlal"},
};
