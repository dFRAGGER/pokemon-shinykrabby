# Pokemon Shiny Krabby - storyline and planned continuation

Status: repository snapshot of 6 September 2026

Story coverage: implemented opening through Marshduke, followed by the author's planned main-story ending and postgame

## Scope and reading method

Lionsarch revision, 16 September 2026: the mountain/factory dialogue and rescue-dependent feedback now identify Regice's extraction and the control-equipment program. The ice-cave visual redesign and mandatory main-floor Regice bay scene await the author's Porymap handoff; Regice is currently described by records and dialogue, not yet shown captive. See [the implementation handoff](LIONSARCH_REGICE_MAP_HANDOFF.md).

Chapters 1-10 describe the repository's implemented map data and dialogue as reviewed on the date above. The section "Author's planned continuation" records the author's subsequent story direction; those events are approved narrative plans, not claims about playable scripts. Unresolved details are explicitly marked. The companion [Hero's Journey review](SHINY_KRABBY_HERO_JOURNEY.md) contains recommendations rather than established story facts.

The review covered all 172 map headers tagged with `"game_version": "sk"`. Of those maps, 85 currently have a local script containing dialogue, a trainer battle, or a PokéNav call. The other 87 are structural maps, service interiors, inherited support maps, future areas, or placeholders without local story dialogue. Generated `scripts.inc` files were treated as compiled output; the editable `.pory` scripts are the story source.

The main implemented route is:

> Erp City -> Route 01 -> Maasje and Crabhill -> Routes 02 and 03 -> Mist City and Deep Cloud Forest -> Batcave and Route 04 -> Siltroot Town -> Lionsarch City and the Lion Mountains -> Steel Factory -> the eastern route -> Marshduke City

Some gyms and side quests can be completed in a different order. The sequence below follows the order implied by dialogue and progression gates.

## The central premise

The player begins as an aspiring Pokemon researcher who wants an internship with Professor Birds. What initially looks like a comic errand to investigate a strangely colored Krabby becomes a regional conflict about biodiversity, scientific responsibility, and control.

The central opposing force is The Faculty. Its members present exploitation as research and enforced uniformity as order. They register and confiscate Pokemon, interfere with wild Pokemon through transmitters, destroy protected forest, capture ancient guardians, conceal Regice's extraction behind mining permits, and use Pokemon as industrial machinery. Their leader, The Rector, believes that natural diversity is chaos and that every living thing should be assigned a useful place.

Against this, the player gradually joins a loose network of people who value living systems in very different ways: Jacob's enthusiasm for Krabby, Daan's conservation work, David's pattern recognition, Nash's ranger experience, Ali and Scott's underground contacts, Peter's local resistance, and finally the Order of the Open Eye's preservation of ancient memory.

The Shiny Krabby is the inciting mystery, but by Marshduke the story has widened into a question: is The Faculty merely collecting rare beings, or is it building something capable of imposing its idea of order on the whole region?

## Principal cast

### The player

An inexperienced would-be intern who begins by taking a starter without permission. The player is repeatedly underestimated as “just a kid” or “the intern,” but becomes the one person who directly witnesses the links between the Golden Krabby, Mew, Registeel, the Lion Mountains, and The Faculty's industrial program.

### Professor Birds

The player's unstable and secretive employer. Birds talks about grants, DNA, genomics, source code, sensors, and implausible research into geothermal pig habitats. He sends the player after the Golden Krabby but reacts defensively when Daan and Jacob later ask about Registeel. His prior scans in Deep Cloud Forest and his “rare pink pig” explanation strongly suggest that he encountered or searched for Mew, but the current story does not confirm his allegiance or exact knowledge.

### Barry / Wouter

Professor Birds calls the previous intern Barry even though his actual name is Wouter. Wouter begins resentful because Birds gave him a Magikarp and treated him poorly. He quits, becomes the player's rival, and joins The Faculty as The Rector's new protege and later an administrator.

His behaviour is not completely one-dimensional. He attacks the player and eventually pushes them into a mine crevice, yet he also refuses The Rector's suggestion that Electabuzz shock his supposedly useless Magikarp. He disguises concern as protection of “specimen quality.” This leaves open whether Wouter is becoming cruel, trying to survive within The Faculty, or both.

### Jacob and Sienna

Jacob is a Pokemon researcher and an obsessive admirer of Krabby. Sienna, his wife, asks the player to find him after he goes to Crabhill. Jacob identifies the fried control device, gives it to the player as the Scanner, directs the player to Daan, and later joins Daan in confronting Professor Birds.

### Daan, Nash, and David Heartfield

- Daan is a nature-focused Pokemon researcher, senior ranger, and the official leader associated with Mist City's Gym. He becomes the player's principal coordinator after the Deep Cloud Forest crisis.
- Nash is the veteran field ranger who helps lead the forest rescue and remains calm in direct conflict.
- David is a young ranger and signal specialist who notices patterns others miss. He is frightened of Beedrill and initially lacks confidence, but proves essential in locating The Faculty's operation and the ancient grotto. After the rescue he serves as Mist City's active Gym Leader. His father's later dialogue confirms that the experience gave him new confidence.

### The Rector and The Conrector

The Rector leads The Faculty. His repeated motto reduces the world to a contest in which order must defeat chaos. He is charismatic enough to recruit Wouter, confident enough to invite the player to join, and pragmatic enough to sacrifice facilities once their materials have shipped.

The Conrector is a senior subordinate involved in factory management and reporting. The title may be intentionally unusual, but no fuller explanation is currently given.

### Ali, Giel, Scott, and Peter

- Ali is Daan's physicist friend, an herbal entrepreneur, and the organizer of “Project Star-Shot.” His apothecary and hydroponic operation fund questionable hardware acquisitions.
- Giel provides comic commentary and knows the Lionsarch underground scene.
- Scott is Ali's paranoid boat contact. He avoids surveillance and smuggles the player into Lionsarch's industrial harbor.
- DJ Peter operates a secret disco club and knows an old tunnel into the Steel Factory. The delivery for Peter is therefore both comic contraband and the practical link that lets the player penetrate The Faculty's base.

### Ms. Stone and Brother Andre

Ms. Stone is curator of Marshduke Cathedral and head of the Order of the Open Eye. Brother Andre is its philosophical janitor. Their cathedral tour reframes the game's environmental conflict as a conflict over memory: people remember spectacular legendary Pokemon while failing to notice the ordinary species disappearing behind them.

## Chapter 1 - A very bad first day in Erp City

### Waking late

The player wakes at home in Erp City already late for an appointment with Professor Birds. The player's mother says the professor is furious and that the promised internship is in danger. She gives the player the Running Shoes and encourages them. Dialogue also hints at a missing or deceased father through the idea that the player's dad would be proud, but the current scripts do not formally explain what happened to him.

The opening establishes the game's tone: personal jokes and eccentric adults on the surface, with a more serious absence in the player's family underneath.

Primary maps: `ErpusCity_StartHouse_2F`, `ErpusCity_StartHouse_1F`, `ErpCity`.

### Professor Birds' laboratory

Birds is already impatient and preoccupied with money, research grants, DNA work, and hidden projects. Wouter is his existing intern, although Birds consistently calls him Barry. Birds orders the player to retrieve boxes from a concealed storage area.

The lower laboratory and its environmental text make the lab more suspicious than Birds admits. It contains genomics equipment, failed subsidy material, strange forest research, a “Source Code” reference, and technology concealed behind absurd explanations. The storage trip leads the player to nine possible starter Pokemon: the Grass, Fire, and Water starters from Kanto, Johto, and Hoenn.

The player takes one. Birds catches the player, fires them for stealing, and then almost immediately needs them again. Jacob has reported a “Golden King” near Maasje, and Birds wants information on the anomalous Pokemon. The player receives a Pokedex and five Poke Balls and is sent out to find and scan it.

Wouter, angry that his own internship produced little more than a Magikarp and humiliation, leaves and declares that the player will not become a successful researcher.

Primary maps: `LabJariIndoor`, `LabJariIndoorF0`, `LabJariIndoorStorage`, `CaveHallwayJari`, `CaveCorridor`.

## Chapter 2 - First contact with The Faculty

On Route 01, two Faculty members, Addy and Ad, stop the player. They insist that the player's Pokemon must be registered and attempt to confiscate it. Their language makes Pokemon sound like inventory: useful specimens can be processed, while weak or noncompliant ones can be discarded.

This is the player's first direct battle with The Faculty. It also establishes that the organization is not simply a remote research institution; it claims practical authority over ordinary trainers and their Pokemon.

Other Route 01 dialogue foreshadows the larger mystery. A former intern recalls Birds assigning bizarre work involving stone, while local observations describe agitated birds and unexplained animal shapes. The short `Route01_Forest` branch currently contains very little local narrative, but it visually opens the idea of a wider ecosystem surrounding the towns.

Primary map: `Route01`.

## Chapter 3 - The Golden King of Maasje

### A town occupied by Krabby

Maasje is in crisis. Krabby have flooded parts of town and are behaving aggressively. Residents are frightened or trapped, and Gym Leader Pete Longfellow has left the Gym area while the disturbance continues.

Sienna explains that Jacob went to Crabhill, the Krabby breeding ground, to investigate and has not returned. The player follows him.

### The Crabhill transmitter

At Crabhill, Faculty member Ad is operating a transmitter that synchronizes the Krabby and treats them as potential organic labour. The device is an early version of the same philosophy later seen in the Steel Factory: nature becomes efficient only when The Faculty removes individual choice.

One Pokemon resists. A shiny golden Krabby reflects or disrupts the signal, fries the transmitter, and causes The Faculty to retreat. The player fights the Golden Krabby in an uncatchable encounter, but it escapes through a crack after the battle. The remaining Krabby recover once the signal ends.

A wall inscription gives the anomaly a mythic role: when stone weeps and the tide is low, a claw of gold will meet a destined hand and command the land. The wording is incomplete enough to preserve several possible interpretations, but it establishes that the Golden Krabby is not merely a cosmetic mutation.

Jacob is rescued. His comic worship of Krabby is sincere, but he also understands the importance of the discarded device. Back home he gives the player the Scanner, identifies the attackers as The Faculty, and says their stated aim is to “optimize nature.” The last readings may contain information even though the device is damaged.

Jacob advises the player not to return empty-handed to Birds. Instead, the player should take the Scanner to his friend Daan in Mist City. This is the moment the player's motivation shifts from pleasing Birds to independently investigating what happened.

Primary maps: `Maasje`, `CrabhillEntrance`, `Indoor_Maasje_Jakub_Home`.

### The first Gym

Once the local crisis allows normal activity to resume, the player challenges Pete Longfellow. Pete is a former geography teacher, and the Gym uses changing tides as both puzzle and theme.

Defeating him grants the Tide Badge, obedience for traded Pokemon through level 20, permission to use Cut outside battle, and TM Water Pulse. The separate honey side quest supplies HM Cut: retired biology teacher and beekeeper Steven Smells asks the player to collect honey from eight coastal hives, then gives HM01 so invasive growth can be cleared.

Primary maps: `Maasje_Gym`, `Indoor_Maasje_Beekeeper_Geurts`.

### Optional Maasje stories

- Bryan introduces himself in the Pokemon Center as a cameraman who intends to film the player's entire research journey whether invited or not.
- An injured and confused Krabby is recovering in the Pokemon Center, showing the aftermath of the transmitter incident.
- The coastal caves contain fossil lore, a possible Helix-for-Dome Fossil trade, and old stories about rare sea life.
- A retired sailor remembers a fog-covered island seen only briefly. Her family worries that age is eroding her memory, a small early echo of Marshduke's later focus on what is remembered and forgotten.
- Maasje's houses, mart, shore trainers, honey hives, and caves mostly add community flavour rather than alter the main plot.

## Chapter 4 - Warnings on Routes 02 and 03

The route to Mist City turns the Golden Krabby incident into part of a wider pattern.

An abandoned or lightly staffed ranger outpost on Route 02 contains records from grid CF-09:

- magnetic readings that are explicitly not geological;
- something underground that does not move and does not need to;
- dark metallic soil;
- a compass spinning without stopping;
- a warm seed-like organic trace;
- repeated references to “mutation”;
- an unreported glimpse of something small, pink, and extremely fast;
- a radio hum compared with something breathing very slowly underground.

These clues foreshadow both Registeel and Mew before either is named.

On Route 03, a reckless trainer has knocked a ladder from a cliff while sprinting toward Mist City. The culprit is not named in that scene, so any connection to Wouter remains inference rather than confirmed fact. The remainder of Routes 02 and 03 is primarily trainer and ecology dialogue.

Primary maps: `Route02`, `Route02_Indoor_Ranger_House`, `Route03`.

## Chapter 5 - The Deep Cloud Forest crisis

### Mist City under pressure

Mist City is a conservation and ranger centre beside Deep Cloud Forest. The Gym is not operating normally because rangers have been deployed after distress calls. Town dialogue describes unusual rain, agitated wildlife, ranger trucks, and blocked access to the forest.

At the Research Center, rescued Slaking, Shiftry, Parasect, and Tropius show evidence of precise artificial disturbance rather than an ordinary storm or natural migration. Reports mention seismic pulses, metallic grinding, magnetic interference, a low-frequency hum, and rapid loss of moisture.

Daan disappeared after responding to illegal deforestation at Whisperwood Grove. The player joins Nash and David Heartfield in the ranger truck. David's instruments and pattern recognition are crucial even though he is nervous about the field mission and particularly afraid of Beedrill.

Primary maps: `MistCity`, `Mistcity_Research_Center_Entrance`, `Mistcity_Research_Center`, `InsideOfTruck`.

### The gorge was a diversion

In Faculty Gorge, a large section of forest has been uprooted. The operation is not conventional logging; The Faculty is searching for something.

Daan is already confronting the group. Wouter appears in Faculty uniform as The Rector's new protege, alongside Jos Vanderloo, Ton Cross, and other members. The player defeats Wouter while Daan and Nash occupy the rest of the team.

The apparent victory is a trap. The Rector reports that the primary team has found the “Silent Guardian.” The destruction at the gorge was a diversion. The Faculty uses a flash attack and escapes toward an ancient meteorite site.

Although the flag records that Daan has been rescued, the real objective has moved deeper into the forest.

Primary map: `DeepCloudForest_FacultyGorge`.

### The Silent Guardian

At the Ancient Grotto, the player briefly encounters or senses Mew before the main confrontation. The event is left unexplained and is not accepted as public evidence by anyone later.

The Faculty smashes open the meteorite site and reveals Registeel, the Silent Guardian. The Rector describes it as one of three ancient golems and says its metal is not of this earth. He introduces his ideology and attempts to frame Faculty membership as development, talent, inspiration, and order.

Registeel is required for a larger plan. Electabuzz creates another blinding flash, and The Faculty removes the guardian by truck. The heroes save Daan but fail to save what the operation was actually designed to capture.

Primary map: `DeepCloudforest_FacultyAncientGrotto`.

### The Birds connection

During the return journey, Daan remembers that Professor Birds spent months scanning this forest years ago while claiming to study geothermal pig habitats. Daan realizes that the player is Birds' latest intern and begins to suspect that the professor's old work is connected to Registeel and the pink Pokemon sightings.

Back in Mist City, Daan confronts local Faculty sympathizers Eleanor and Marcus. They know about the excavation but flee rather than answer. Daan recognizes something familiar in the Scanner and decides to take Jacob to Birds' laboratory. He tells the player to continue west through Batcave, stressing that the problem is now much larger than one shiny Krabby: “We are a team now.” He gives the player the regional navigation device and his contact details.

Daan and Jacob's confrontation with Birds happens off-screen. Their later report is that Birds denied knowing anything about Registeel and repeated the pig-sensor explanation.

Primary maps: `Mistcity_Indoor_FacultySympathizer`, `Mistcity_Research_Center`, `Route04`.

### The second Gym

Daan is associated with the Gym, but after the rescue David serves as the active leader. The dark Gym and its gradually increasing light turn David's fear and growing confidence into the mechanical theme of the challenge.

Defeating David grants the Forest Badge, obedience for traded Pokemon through level 30, and permission to use Flash outside battle. The Research Center also gives the player the Exp Share toggle after the rescue.

Primary map: `Mistcity_Indoor_Gym`.

### Optional Mist City stories

- Leaf the mycologist asks to see Paras, Parasect, Shroomish, and Breloom for a Fungus Index.
- Woodcarver Silas loses access to sacred old trees during the Faculty blockade. After the rescue he can request Mosswood and reward the player with a Root Fossil. His carvings include Celebi and an unlabeled long-tailed creature that resembles the player's unexplained sightings.
- Elara tells the local legend of the Silent Guardian before the mission and later gives Iron Tail in gratitude.
- David's father describes how David sees connections that others miss and later thanks the player for helping his child recognize that gift as a strength.
- The restored gorge map exists as a post-crisis location, although it has no local dialogue of its own.

## Chapter 6 - Through Batcave and the mudflats

Batcave is initially obstructed by a rockfall. Workers and Machoke are clearing the debris in near-total darkness, providing a practical reason to obtain Flash. Cave dialogue focuses on Pokemon adapted to darkness and the danger of navigating without light.

Emerging onto Route 04 triggers Daan's call. He and Jacob have just left Birds' lab without useful answers. Daan has traced new Faculty activity to Lionsarch City, where a company has purchased the old steel plant and the surrounding mining rights. He directs the player downhill through the mudflats to Siltroot Town and tells them to find Ali, an eccentric physicist with access to smugglers and boat captains.

Route 04 itself is an ecological transition from mountain cave to mangrove, mudflat, beach, shallow water, and old coastal legends. Its dialogue mentions depleted shellfish, unusual Totodile, hidden waterfall passages, and the physical difficulty of crossing the wetlands.

Primary maps: `Batcave`, `Route04`, `Route04_CenterCave`.

## Chapter 7 - The Siltroot delivery

Siltroot is an old mangrove trading post whose local culture mixes environmental decline, contraband, herbal experimentation, and comedy. Residents remember waters once crowded with rare life, while present-day fishers argue about whether overfishing or regulation killed the trade.

Ali and Giel receive the player at the Magical Root apothecary. Ali confirms that Scott can provide passage to Lionsarch, but demands a favour. The player must retrieve a package for DJ Peter, a Lionsarch client whose purchases help finance Ali's “Project Star-Shot.”

The package is stored in a hydroponic shed maintained by meditating Slowbro. This creates a stealth sequence: alerting a Slowbro teleports the player back and can return the package to its starting point. On success, Ali gives the player his unique Stash Case as proof of identity and directs them to Scott.

Scott checks the player's credentials and heat signature, then moves the player covertly by boat. He avoids a satellite pass and Lionsarch's facial-recognition coverage. At the industrial harbor he refuses to enter the city, tells the player to find DJ Peter by following the disco music, and disappears.

This chapter is deliberately comic, but it serves three plot functions:

1. It shows surveillance and Faculty influence extending beyond isolated research sites.
2. It gives the player a believable covert route into Lionsarch's secured industrial district.
3. It establishes Peter, whose old smuggling tunnel later becomes the only available entrance to the Steel Factory.

Primary maps: `SiltrootTown`, `SiltrootTown_Indoor_Ali_Apothecary`, `SiltrootTown_Indoor_Shed`, `SiltrootTown_Indoor_FacultyDefector`.

The local grinder, Stash Case, Rolling Table, Joints, Blunts, and Bowls form a separate Pokemon-enhancement side system. The recurring “UP TO THE WHITELIGHT” stranger also reappears here, but the present scripts do not yet explain that thread.

## Chapter 8 - Lionsarch, city of iron

### Arrival and atmosphere

Lionsarch is a cold northern port between the sea and the Twin Lion Mountains. Older residents remember fishing, lumber, and Krabby-assisted dock work. The modern city moves enormous quantities of ore, coal, machinery, and processed steel. Locals welcome the employment but complain about smog, pollution, secrecy, missing fishing boats, and unlabelled cargo.

The Faculty docks mention shielding, containment frames, dampening alloy, processing units, and a second phase. A reporter suspects the mining story is false; after the factory incident, their editor abruptly kills the investigation. Cargo records and newspapers show that production has tripled and that some outbound crates have no disclosed contents.

Primary maps: `LionsarchCity`, `LionsarchCity_Indoor_House1`, `LionsarchCity_Indoor_House2`, `LionsarchCity_Indoor_VisitorCenter`.

### Peter and the climbing equipment

The package gets the player through Peter's bouncers and into his secret basement disco. Peter accepts Ali's delivery and gives the player his old Climbing Rope: equipment he once used both for dancing and for scaling the Lion Mountains.

Peter knows more than he first says. A guarded tunnel in the basement once connected smugglers directly to the old iron factory. The Faculty believes the passage sealed, while Peter retains access from his side.

Primary maps: `LionsarchCity_Indoor_PeterHouse`, `LionsarchCity_Indoor_PeterBasementParty`.

### The East Lion mine

The mountain routes show that The Faculty's drilling has caused tremors and agitated wildlife. Local legends say Regigigas shaped guardians from mountain stone, ice, and volcanic iron. Ordinary mining permits conceal the excavation of a sealed ancient ice chamber. Hikers notice that heavily guarded freight, rather than ordinary ore, has already been sent to the steelworks.

Underground workers and a readable extraction record identify Regice as the intact specimen removed from the chamber and transferred to the factory. The widened freight passage and weakened ice supports are described in dialogue; the corresponding visual redesign remains pending. Wouter now holds the title of Administrator.

The player defeats him. During an evacuation caused by drilling damage, Wouter confirms that Regice is already at the factory and orders the remaining equipment and records removed. He then attacks from behind and pushes the player into a dark crevice. The player wakes alone, recalls Regice's destination, and escapes.

Returning to Peter unlocks the next step. Horrified that The Faculty tried to kill the player, Peter realizes that the sealed freight he saw entering the steelworks held Regice. He authorizes access to the old tunnel without claiming to understand the controller scheme. Paolo opens the basement route into the factory's lower level.

Primary maps: `EastLionMountain`, `EastLionMountain_Faculty_Mining_Cave`, `EastLionMountain_Faculty_Mining_Cave_B1F`, `LionsarchCity_Steel_Factory_B1F`.

### The Steel Factory

Inside the plant, The Faculty's ideology becomes physical. Lairon are bred in captivity and forced to eat impurity-heavy ore so their digestion produces refined iron. Magnemite enforce compliance through electrical punishment. Reports acknowledge stress fractures and declining health while describing the Pokemon as specimens, assets, and output units.

The factory fills legitimate steel orders while reserving selected output for containment frames. Records trace the coastal transmitter, the five-relay worker-control network, and the independently powered legendary controller as related technology. The player recognizes Jacob's damaged device in the diagrams; it remains evidence rather than a working remote control. Registeel research informed the containment work, and Regice is the latest captive test subject. Its portable unit can force limited repeated responses and operate independently of the worker network.

The planned mandatory main-floor bay scene will show Regice in its frame before its scheduled transfer, then close the loading shutter before the Aron choice. This scene is not yet wired: the author is designing the bay. An evidence-terminal script is prepared for the new bay, and the same record is already readable at the existing factory control panel. The upstairs meeting also confirms the essential connection without requiring the rescue.

A small Aron can ask the player for help. Following it leads through five machines whose power cables can be disconnected. Once the internal lockout is disabled, the player can fight a scientist and release the captive Pokemon. Aron reunites with its family, the machinery falls quiet, and Mew's faint cry is heard from somewhere in the structure.

Before the optional rescue, a maintenance notice explains that the worker network and Regice's controller have separate power supplies. Helping Aron does not cause the shipment to leave, and declining does not recover Regice. The harbor reaction and Daan's call now use the actual rescue flag rather than the sprite-hiding flag.

Primary map: `LionsarchCity_Steel_Factory`.

### Confronting The Rector

On the second floor, the player overhears The Rector, The Conrector, and Wouter reviewing the operation:

- Regice's containment tests are complete and its scheduled harbor transfer is underway;
- portable containment frames and controllers are ready for transport;
- captive Lairon are either scheduled for shipment or falsely reported as released because they have become unreliable;
- The Rector recommends shocking Wouter's Magikarp to make expectations clear;
- Wouter refuses and offers the weak excuse that electricity would reduce specimen quality;
- Wouter reports pushing a civilian into a crevice as though it were an ordinary mine accident.

The Rector recognizes the player from Deep Cloud Forest. If the workers were rescued, he challenges The Conrector's excuse; otherwise, he orders their transfer and demands an explanation for the intrusion. Wouter and The Conrector leave to secure the ships. The player defeats The Rector, but Regice's independently powered transfer was already underway in either branch.

Outside, dialogue explicitly identifies Regice's powered containment unit aboard the departing shipment. The Rector praises Wouter as the sort of ambitious young person The Faculty wants, then says that The Faculty is an idea rather than a building. He escapes on Skarmory. Mew briefly appears and responds to whether the player freed the workers before vanishing.

Daan calls and recognizes concrete progress: mining permits hid Regice's extraction, the factory built restraints, and the controllers match Jacob's damaged device. He acknowledges the rescued workers, or includes the unrescued workers in the search. The team needs a way to interrupt the portable commands rather than merely cut building power. He directs the player east to Marshduke while he, Jacob, and Ali examine the design and shipping records. The final three-Regi purpose remains unrevealed.

The factory is defeated as a place, but The Faculty completes its immediate logistical objective.

Primary maps: `LionsarchCity_Steel_Factory_2F`, `LionsarchCity`.

### The third Gym

Lionsarch's Gym is based on the two mountain peaks and has two Ice-type leaders. Tanya represents free-falling snow; Tara represents ice that holds its shape. The player must defeat Tanya first and then Tara.

Together they grant the Peak Badge, obedience for traded Pokemon through level 40, permission to use Rock Smash outside battle, and TM Hail. Their conclusion is thematic: snow and ice disagree but protect the valley together, just as a trainer and team become stronger through different roles rather than forced sameness.

Primary map: `LionsarchCity_Indoor_Gym`.

### Optional Lionsarch stories

- Olaf's missing keepsakes lead to the Itemfinder and explore memory loss at a personal scale.
- Sven and Marta preserve the harbour's fishing history; Felix's manifests expose unexplained special cargo.
- Mr. Kasmi gives the Acro Bike and promises a later Mach Bike. His partner Phildy provides a rest point near the cycling route.
- The Visitor Center and mountain NPCs change dialogue after The Faculty leaves, noting that tremors stop and Pokemon calm down.
- Peter rewards completion of the factory arc with TM Overheat.
- The Upana cave system is not required by the core Faculty scenes, but it carries major world lore. Ancient carvings show a plated figure with long curved arms, an ever-open eye associated with an underground river, worshippers or keepers, a huge winged visitor, and what may be a sacrifice. The scripts deliberately do not name the guardian. The river is said to run beneath the Lion Mountains all the way to the sea.

## Chapter 9 - The road east

The eastern route can pass through the Upana caves, Bike Park, Route 013_2's sinking mud, and Route 014's broken bridge sequence. The landscape moves from industrial mountain country into the delta around Marshduke.

Bike Park is currently a largely self-contained cycling area. Its trainers and riders add bird, altitude, and migration lore. Mr. Kasmi supplies the required bike. Route 013_2 implements the mud-platform traversal mechanic. On Route 014, Ari demonstrates a running jump across a broken bridge and proposes a later sprint challenge connected with Breeze Tower.

The Ari challenge is future-facing: its prerequisite Strength flag is not currently set anywhere in the SK scripts, so the complete race sequence is not yet naturally available.

Primary maps: `Route06`, `Route06_UpanaCave_MainRoom`, `Route06_UpanaCave_RiverRoom_B1F`, `BikePark`, `BikeShop_Jaouad`, `Route013_2`, `Route014`.

## Chapter 10 - Marshduke, city of memory

### What is implemented in the city

Marshduke is physically present as a large delta city. A new dialogue and trainer pass populates the city, Route013_2, Route013, Route014, the estuaries, ranger huts, research centre and cemetery. These actors are staged in rows for the author to position in Porymap; their temporary coordinates are not final gameplay placements. The three routes and cemetery contain 30 new trainers with exactly 59 Pokemon, progressing from levels 17-19 to 20-22. See [the placement and roster guide](MARSHDUKE_NPC_PLACEMENT.md).

The estuary houses are ranger observation huts. Each ranger describes a different viewpoint: woodland with Ursaring, reed beds, shallow pools, or the open floodplain. The boathouse holds patrol supplies and observation records. Camera-based sightings and triggered wild encounters remain future work once the author places the viewpoints.

The research centre studies Mega Alakazam, consciousness and the six altars. Six teams pair monks with scientists, interpreting the visions through identity, coordination, shared origins, sensation, empathy and the sixth altar's unstable images. They overlook surrounding wildlife while concentrating on the legendary subjects. Neither the teams nor the ranger dialogue identifies the source of the visions. The research centre's map entrances and stairs still need to be connected by the author.

The cemetery is inside the city gardens. Its plant keeper recalls flowers and ferns that used to grow around the delta, while scarcely noticing inscriptions or grand visions. Visitors, a caretaker and a child's memorial doll give the graveyard a personal character. The existing library dialogue remains the city's written record of its past. Several other houses and tower floors remain frameworks.

Daan's last explicit instruction is to go to Marshduke for the next Gym. The Gym map contains a large inherited trainer gauntlet using Mossdeep text symbols, but there is no implemented Marshduke Gym Leader scene, fourth badge award, or story resolution. Therefore reaching Marshduke is currently a destination, not the completion of a new badge chapter.

### The Cathedral of the Open Eye

The cathedral is the one fully written Marshduke story sequence. On entering, the player is met by Ms. Stone and Brother Andre and taken on a long guided tour.

At its centre sits a Mega Alakazam known as the Rememberer. Geological estimates place the start of its meditation about 10,000 years ago, after the last ice age. It has supposedly maintained Mega Evolution without a stone or trainer and has never moved, even while the changing delta eroded around its hill. It remembers not only its own surroundings but distant events it could not physically have witnessed.

The Order of the Open Eye believes Alakazam is sorting a nearly limitless archive and choosing memories humanity should not have to learn twice.

### The five memories

1. **The Rekindled - Ho-Oh, Raikou, Entei, and Suicune.** A distant tower burns, three Pokemon die, and Ho-Oh restores them in changed forms. Ms. Stone's lesson is that a second life is an assignment, not merely a gift. Other visitors challenge whether resurrection without consent is truly merciful.

2. **The Balanced Sky - Lugia and the three legendary birds.** Fire, frost, and lightning unbalance the sky until Lugia restores the relationship and withdraws. The official reading favours restraint and maintenance of balance rather than domination.

3. **The First Dawn - Mew and the origins of Pokemon life.** The revised game dialogue replaces the original Mew/Mewtwo Mirror with the Order's creation legend: Mew brings the first Pokemon into being. Ms. Stone leaves open whether Mew made the world itself or brought life to an existing world, and draws attention to different forms of life sharing a beginning. A visitor notices more Pokemon each time they watch; Sister Ruth questions how a congregation that calls all Pokemon family can want a nesting Pidgey removed. The vision ends with Mew seeming to notice its observer. The player indicates having seen Mew outside the vision, which Ms. Stone doubts because no wild sighting has been confirmed for decades. The sign, visitor, priest, and guided-tour dialogue are updated; the placeholder image and existing Mewtwo display objects are unchanged. Mewtwo's creation belongs to Birds' planned postgame experiment.

4. **The divided world - Groudon, Kyogre, and Rayquaza.** Land and sea pursue their own natures until Rayquaza stops the conflict from above. Ms. Stone reads this as balance without blindly choosing one extreme. Other cathedral dialogue deliberately questions whether intervention by overwhelming power is peace or dictatorship.

5. **The Two Hearts - Latios and Latias.** Two distinct beings survive through interdependence. The lesson is not sameness but a bond strong enough to let difference endure: love grows larger when shared.

### The empty altar

A sixth space has no stable memory. During construction roughly nine centuries earlier, witnesses reported one giant with seven eyes, several giants, or mutually incompatible shapes, all surrounded by green light. Its plaque reads:

> Five memories of what was. One space for what could be. The difference between them is us.

The scripts do not yet reveal the altar's subject. The author has now established its intended payoff: after the later confrontation with Barry and The Rector, that confrontation will appear here as a new vision. This does not establish the cathedral itself as the battle's physical location. The locked library manuscript adds another clue: before the ice left, a green-lit “traveler” kept company with the Rememberer, pairing one being unable to leave the past with another unable to remain in the present. That manuscript is currently gated behind an unset flag and is not normally readable.

### Ms. Stone's private conclusion

At the end of the tour, Ms. Stone admits that for sixty years she watched only the legendary subjects. She failed to notice the ordinary world behind them: waters once too full of fish to see through and skies crowded with bird species, all now gone.

Her conclusion is the current thematic endpoint of Shiny Krabby:

> Alakazam may not be showing old stories at all. It may be showing what is happening now.

The author has clarified the underlying explanation: Celebi uses its experience as a time traveler to bring this message to people through Mega Alakazam. The central concern is shifting ecological baselines. People become accustomed to the diminished variety and abundance of wildlife around them and forget how rich the same world once was, and could be again. The loss is already present; it is not merely a forecast of a future Faculty disaster.

The five legendary scenes are primarily the setting for that ecological message. Their individual stories need not become clues to The Faculty's scheme or a checklist of later plot events. Their backgrounds let people compare past abundance with today's impoverished expectations. The empty altar is the specific connection to the future main-story confrontation.

Primary maps: `MarshDukeCity`, `Marshduke_Indoor_Chatedral`, `Marshduke_Indoor_House1`, `Marshduke_Indoor_House4`.

## Exact story position at the current end

At the end of the implemented Marshduke material, the player's position is as follows.

### Confirmed accomplishments

- The player has a starter, Pokedex, and Scanner and is still nominally connected to Professor Birds, although trust in him is badly damaged.
- The Golden Krabby was encountered and freed from Faculty control, but not caught or located again.
- The player can have earned three badges: Tide, Forest, and Peak.
- Daan has been rescued and now treats the player as a partner.
- The Faculty has been driven from Deep Cloud Forest, the East Lion mine, and the Lionsarch factory.
- The player has defeated Wouter repeatedly and defeated The Rector once in a formal battle.
- Captive factory Pokemon can have been freed, and Mew has noticed the player more than once.
- The player has reached Marshduke and can complete the cathedral tour.

### What The Faculty successfully achieved

- It disrupted and tested control over Maasje's Krabby.
- It located and captured Registeel.
- It extracted Regice from a sealed Lion Mountain ice chamber under cover of mineral prospecting.
- It manufactured portable containment frames and developed the coastal control technology further.
- It shipped Regice and the completed equipment to a redacted destination despite losing the factory.
- Its senior leadership escaped: The Rector by Skarmory, with Wouter and The Conrector aboard the departing operation.

### The heroes' current knowledge

- Daan, Jacob, and Ali know that the Maasje device, Birds' forest scans, Registeel, the mines, and the factory are probably connected.
- They do not know where the ships went or exactly what is being assembled.
- The player is the only recurring witness to Mew, and other characters either do not see it or do not believe the report.
- The Cathedral introduces a historical pattern involving legendary beings, environmental collapse, ancient guardians, and an unresolved green-light event.

### The immediate objective

The last direct objective from Daan is: go east to Marshduke and challenge its Gym while the group investigates The Faculty's shipping network.

That objective currently cannot be completed as a story beat. Marshduke has no implemented leader or fourth-badge scene. The cathedral tour is the latest substantial narrative event and is therefore the present end of the written story, even though it is not yet wired as an explicit main-quest finale.

## Mysteries at Marshduke, before the planned revelations

These questions describe what the player knows at the implemented endpoint. Several now have author-confirmed answers in the planned continuation below.

### The Golden Krabby

Why can it resist and reflect Faculty control? What does the Crabhill prophecy mean by a claw of gold commanding the land? Why did Birds already expect the anomaly? The title creature has not reappeared after Maasje.

### Professor Birds

Birds' old forest scans, genomics equipment, pink-pig cover story, and interest in unusual Pokemon make him suspicious. The implemented scenes have not yet exposed his purpose. The planned explanation is that he wants Mew's DNA to produce the perfect pig for pig farming; the player's Pokedex data helps locate Mew. No organizational relationship between Birds and The Faculty has been established by the author.

### Mew

Mew appears around locations central to Faculty research: CF-09 lore, the Ancient Grotto, the Steel Factory, and the Lionsarch escape. The Cathedral's First Dawn vision ends on Mew seeming to notice its observer, and Ms. Stone cannot accept the player's sighting. The author confirms that Mew watches and judges the player's treatment of other Pokemon. The precise gameplay consequences of those judgments remain to be designed.

### Registeel, Regice, and the shipped controllers

Registeel's location after capture is unresolved. The factory identifies Regice's mountain origin and portable containment technology, but does not reveal the final destination or the plan to use all three golems against Mew.

### The other guardians

Lion Mountain stories refer to multiple guardians shaped from stone, ice, and volcanic iron. Upana carvings describe another ancient river guardian without naming it. The Cathedral's empty altar shows inconsistent giants. Together these point beyond Registeel, but no later capture or awakening is yet implemented.

### Wouter's Magikarp

Wouter calls Magikarp useless in public but protects it from The Rector's Electabuzz. Whether this becomes redemption, hypocrisy, or tragedy remains open.

### The loss of ordinary species

The disappearing fish, birds, forest life, and local livelihoods recur across otherwise comic towns. Ms. Stone finally names this as the pattern people overlooked. This is presently the most coherent thematic spine for the next story chapter.

### The White Light

The unexplained “UP TO THE WHITELIGHT” encounters in Maasje and Siltroot have flags and repeated staging but no current explanation or payoff.

## Author's planned continuation

The following records the author's direction supplied after the initial repository review. None of these additions asserts that new map scripts, battles, items, or quest flags have been implemented. Suggestions for strengthening the plan are kept in the [Hero's Journey review](SHINY_KRABBY_HERO_JOURNEY.md).

### Chapter 11 - Balkum, the dry river, and Regirock

After Marshduke, the player travels to Balkum Town, an old gold-mining settlement in a desert landscape beside ancient ruins. Gold searchers and archaeologists live here, prospecting for gold, investigating fossils, and translating ancient texts. The riverbed has run dry. Trees still stand along its former shores, and some of the apparent trees blocking the player's path are Sudowoodo.

This setting brings several kinds of history together: what the rocks preserve, what people wrote down, what people extracted, and what a dry river no longer supports. The cause and timescale of the river's disappearance have not yet been specified.

At the ancient trees/ruins area, the player encounters The Faculty searching for Regirock. A fight leads to another moral choice between rescuing threatened Pokemon and trying to prevent Regirock's capture. The Faculty gets Regirock whichever option the player chooses. Mew witnesses the decision and judges the player. The rescue's particular victims, the reason both objectives cannot be achieved, and the subsequent branch consequences remain open.

Balkum's Gym specializes in fossil Pokemon, connecting its battles to the town's fossil research and archaeological identity. The leader, roster, levels, and badge details remain undecided; a fossil theme does not by itself require a single-type team.

After defeating Balkum's Gym and obtaining Surf, the player can use water to wake and move the Sudowoodo, opening the onward route toward Hezik. The exact interaction is a design detail: Surf provides the intended progression gate, but this does not automatically refill the dry river.

### Chapter 12 - Hezik and the Faculty headquarters

Hezik Town houses The Faculty's head office. By this point the player already knows about Registeel's forest capture, Regice's extraction from the Lion Mountains and shipment through the steelworks, and Regirock's capture in Balkum. The new revelation here is why The Faculty needs all three: its plan to bind Mew. The earlier offscreen southern-ice-shelf origin for Regice is superseded. Hezik's actual map script is still a placeholder; this remains planned continuation.

The purpose of collecting the three golems becomes clear. The Faculty plans to use Registeel, Regirock, and Regice together to immobilize and capture Mew. Mew embodies natural diversity and the power that diversity makes possible. For The Faculty, containing it is the ultimate expression of imposing order on nature.

The golems are bound together as part of a controlled system. A device of the same kind encountered early in Maasje forces them to cooperate with the scheme. The final mechanism's detailed rules remain undecided, but the connection from the first Krabby transmitter to the legendary containment apparatus is explicit.

The player defeats the headquarters operation and The Faculty's forces there. Only The Rector and Barry escape with the three Regis and move to another location where they can lure Mew into a trap. The Conrector does not escape Hezik and does not participate in the final confrontation; the earlier reference to that involvement was a typo. The Conrector's precise outcome at headquarters remains unspecified. Failure to escape does not establish a death.

### Professor Birds' parallel pursuit

Professor Birds also wants Mew, his "pink pig." His objective is to collect DNA and produce a perfect pig for commercial pig farming. He is a second pursuer with his own purpose; the plan does not establish him as a Faculty member or secret leader.

As the player catches more Pokemon, the Pokedex accumulates information that pinpoints Mew's location. Birds can use that information in his own attempt to capture it. This makes the opening research assignment causally important to the end of the game: the player's ordinary progress has also advanced Birds' project.

The precise explanation for the tracking remains open. The author has not yet specified how Pokemon records identify Mew, whether Birds has continuous access or downloads the data later, or whether The Faculty obtains any of it. These should be revealed through concrete scenes before Birds' final arrival.

### Chapter 13 - Uje Town, Veghel City, and the return of the Golden Krabby

During this stage, the player and Daan travel through the seventh and eighth settlements, Uje Town and Veghel City. They learn more about the power of shiny Pokemon and hear renewed reports of the Golden Krabby. Local conflicts, Gym details, and the exact sequence of the Birds revelation remain undecided.

Uje Town is on a volcanic island inspired by the Hawaiian islands, including Maui. This island setting is part of the author's plan; its individual habitats and role in the investigation have not yet been specified.

Veghel City is provisionally set in a bamboo forest. Its name and place as the eighth settlement are established, while the bamboo setting remains a tentative idea.

The reports establish a practical reason to seek the title Pokemon again. Before the final confrontation, the player searches somewhere in the region for the Golden Krabby. Its location remains deliberately open. The encounter should establish how it will accompany or assist the player, but whether it is caught, joins voluntarily, or helps temporarily has not been chosen.

The power demonstrated at Crabhill now has a larger application: the Golden Krabby can block the signal from the device controlling the golems. The plan establishes this capability, while the limits of shiny powers in general and the reason this particular Krabby is needed remain to be defined.

### Chapter 14 - The containment attempt and liberation

At a still-undecided final site, the remaining Faculty leadership deploys the three captive Regis to trap Mew. The player confronts Barry and The Rector. The Conrector is not present, having failed to escape Hezik.

With the Golden Krabby's help, the player blocks the control signal. The golems' forced coordination is broken, allowing the containment scheme to fail and Mew to be freed. This connects the entire main plot: the early device, the Golden Krabby's resistance, the guardian captures, the factory's industrial preparation, and Mew's appearances all have consequences here. The exact battles, liberation order, and individual fates of the antagonists and Regis still need to be written.

When the Golden Krabby breaks the Regis' control signal and Mew breaks free, Mew rages and leaves a feather. The feather comes from Mew during this liberation; it is the DNA sample that will enable Birds' later experiment. The exact visual staging of Mew leaving the feather remains to be designed.

After Mew is freed, Professor Birds appears and attempts to capture it himself. His intervention produces a chaotic, comic battle in which he fails to secure Mew. He does, however, obtain the feather left during Mew's rage. His failed capture and successful recovery of the sample are separate outcomes.

After the later Barry/Rector confrontation, the previously empty Marshduke altar displays that event. Celebi and Alakazam's archive now includes a moment from the player's own journey. This is a record of the confrontation, not a specification that it takes place inside the cathedral. How the player learns that the display has changed is still to be decided.

### Boekel and the northern approach to the League

Boekel is a small settlement consisting of one house. A redheaded person lives there but is never home. Its placement in the travel route is not yet specified, and no secret identity, quest, or later reveal is established for its absent resident.

The Pokemon League lies far to the north, beyond a broad plain or savanna. The author envisions safari activities in this area. The exact landscape, safari mechanics, connecting routes, and order relative to the final Faculty confrontation remain preliminary ideas.

### The League and postgame

The final Faculty confrontation is planned around the late-game journey through Uje Town and Veghel City. The exact order relative to the eighth Gym and the northern League is not fully specified. The Mewtwo follow-up explicitly occurs after the Elite Four.

Birds contacts the player after the Elite Four. Although he failed to capture Mew, he has used the DNA sample to attempt his perfect pig project. He has accidentally created Mewtwo, which the player can then encounter and capture. The revised Mew-only cathedral dialogue removes the earlier narrative chronology conflict; the old Mewtwo display objects still need a separate visual update.

The player can also travel to the ancient forest west of Marshduke and encounter and capture Celebi in the postgame. This provides access to the time traveler behind the ecological message delivered through Mega Alakazam. The precise forest map and encounter conditions have not been chosen.

### Confirmed narrative connections

| Early element | Planned payoff |
| --- | --- |
| Maasje control transmitter | The same kind of control technology binds the three Regis in the Mew trap. |
| Golden Krabby resists the transmitter | It becomes the means of blocking the final control signal. |
| Birds' pink-pig research and Pokedex gift | The player's accumulated research helps Birds locate Mew for his pig DNA project. |
| Registeel research, Regice's extraction, and factory controllers | The development from coastal transmitter to portable legendary containment prepares the later three-golem scheme. |
| Mew watches rescue choices | It observes the player's priorities, including the Balkum choice. |
| Green-light traveler and impossible distant memories | Celebi brings experience across time to Mega Alakazam. |
| Historical wildlife abundance behind the legendary scenes | Celebi challenges the impoverished ecological baseline people accept as normal. |
| Empty altar | The later confrontation with Barry and The Rector becomes a new vision. |
| Mew leaves a feather while raging as it breaks free | Birds obtains the sample despite failing to capture Mew; his post-Elite Four experiment creates a capturable Mewtwo. |
| Cathedral's revised Mew-only creation legend | Establishes Mew's association with the origins of Pokemon diversity without describing Mewtwo before Birds creates it. |
| Ancient forest west of Marshduke | Postgame Celebi encounter. |

### Details still open for author decisions

- The fourth Gym and transition out of Marshduke; the leader and roster for Balkum's confirmed fossil-Pokemon Gym; Hezik Gym details.
- Balkum's river history, threatened Pokemon, rescue dilemma, and consequences.
- The Conrector's precise fate at Hezik; it is settled that only The Rector and Barry escape to the finale.
- How the three golems and manufactured material contain Mew, and how Mew is lured there.
- How Pokedex research locates Mew, who can access it, and when the player finds out.
- Uje Town and Veghel City's individual roles and Gyms, whether Veghel retains the bamboo-forest setting, and why there is time to visit them before the trap becomes operational.
- Boekel's location, the northern plain/savanna and safari design, and the approach to the League.
- The rules of shiny powers, the Golden Krabby's location, and the terms of its help.
- Mew's judgment and how players who made different choices can still complete the story.
- Final battle site, encounter order, antagonist outcomes, and the League's place in the sequence.
- Visual staging of Mew leaving its feather during liberation, and replacement artwork/display objects for the cathedral's now-written Mew-only creation legend.
- When the sixth altar updates and how the Celebi postgame encounter becomes available.

## Story-state spine for implementation

| Stage | Principal state | Narrative meaning |
| --- | --- | --- |
| Opening | `VAR_RECIEVED_STARTER_POKEMON` | Lab intrusion, starter choice, Birds' assignment |
| Route 01 | `FLAG_FACULTY_GRUNTS_ROUT01` | First Faculty confrontation complete |
| Crabhill | `FLAG_SHINY_KRABBY_ENCOUNTER` | Golden Krabby encountered; Jacob rescued |
| Jacob | `FLAG_JAKUB_CONVO`, Scanner item | Investigation redirected to Daan |
| Badge 1 | `FLAG_BADGE01_GET` | Tide Badge and Cut permission |
| Forest mission | `FLAG_RESCUED_DAAN` | Gorge confrontation complete; ancient-grotto pursuit begins/has occurred |
| Mist aftermath | `FLAG_FACULTY_SYMPATHIZERS_1/2`, `FLAG_HELPED_DAN_BEAT_FACULTY` | Daan investigates Birds; city and optional quests update |
| Badge 2 | `FLAG_BADGE02_GET` | Forest Badge and Flash permission |
| Siltroot | `FLAG_SILTROOTTOWN_ALI_GIEL_CONVO1`, `FLAG_SILTROOTTOWN_STASH_SACK` | Ali authorizes the shed retrieval and Scott contact |
| Lionsarch access | `FLAG_DELIVERED_ALIS_PACKAGE_TO_PETER`, `FLAG_RECEIVED_CLIMBING_ROPE` | Peter relationship and mountain access established |
| Mine | `FLAG_HIDE_FACULTY_AT_WESTLION_MINE`, `VAR_MINING_CAVE_STATE` | Material removed; player thrown into crevice and escapes |
| Factory entry | `FLAG_PETER_GAVE_TUNNEL_PERMISSION`, `FLAG_STEEL_FACTORY_TUNNEL_OPEN` | Smuggling passage opened |
| Factory moral branch | wire flags, `FLAG_STEEL_FACTORY_FREED_POKEMON` | Aron-guided shutdown and captive release |
| Factory finale | `FLAG_STEEL_FACTORY_RECTOR_DEFEATED`, `FLAG_STEEL_FACTORY_COMPLETE`, `VAR_LIONSARCH_CITY_STATE` | Rector defeated; shipment and escape scene triggered |
| Badge 3 | `FLAG_DEFEATED_LIONSARCH_LEADER1`, `FLAG_BADGE03_GET` | Both Lion peaks defeated; Rock Smash permission |
| Cathedral | `VAR_CATHEDRAL_STATE_MARSHDUKE`, `FLAG_MARSHDUKE_CATHEDRAL_TOUR` | Tour complete; Marshduke's thematic revelation delivered |

## Current continuity and implementation cautions

These are not proposed rewrites; they are places where the code does not yet cleanly express the apparent story.

1. **Marshduke has no completed main quest.** The city now has staged outdoor and research-centre dialogue, but its Gym lacks a leader and badge event, and Daan's instruction has no resolution. The new delta trainers and local conversations need final object placement before playtesting.

2. **The cathedral's planned payoff is not implemented.** Its tour triggers on first entry, but the empty altar has no post-confrontation update yet. The five existing memories are intended as ecological storytelling and do not all need to advance a Faculty quest state.

3. **The altar previews are placeholders.** All five signs use `visionpreview(...)` with comments naming temporary images. The separate Latios/Latias and Mew/Mewtwo vision maps are not the active presentation path; only the Latios/Latias map has a local sequence script.

4. **The ancient manuscript is dormant.** `FLAG_MD_CLOSED_SHELF` is checked by the library but is not set by any current SK script. The manuscript can therefore not be read through normal progression. Reading it sets `FLAG_MD_READ_ANCIENT_MANUSCRIPT`, but nothing consumes that result yet.

5. **Ari's continuation is dormant.** `FLAG_STRENGTH_UNLOCKED` is never set in current SK content, so the Marshduke gallery cannot naturally advance to the Route 014 sprint challenge.

6. **The Mach Bike callback is dormant.** Mr. Kasmi promises a call when `FLAG_MACH_BIKE_READY` is set, but no current SK script sets it.

7. **The factory Pokemon-choice feedback has been corrected.** `FLAG_STEEL_FACTORY_POKEMON_CAGED` controls temporary sprite visibility and is not a reliable rescue result. The harbor reaction and Daan's call now use `FLAG_STEEL_FACTORY_FREED_POKEMON`. The Conrector confrontation also branches on that result. Cell-panel guards run before movement commands for the hidden cell Aron, and interacting with the guiding Aron no longer invokes that cell sequence. Emulator verification of both routes remains required.

8. **Some names and labels remain transitional.** Examples include `FLAG_HELPED_DAN_BEAT_FACULTY` for Daan, `VAR_RECIEVED_STARTER_POKEMON`, the `Chatedral` map spelling, “Teserra/Terassa/Tessera” variants, and Marshduke Gym scripts that still reference Mossdeep text names. These do not by themselves change the plot, but they make future story maintenance harder.

9. **Route 06 still contains an end-of-beta sign.** At the same time, connected Bike Park, eastern-route, Marshduke, and cathedral content exists beyond the Lionsarch chapter. The intended public endpoint should be made consistent with the actual playable boundary.

## Map coverage appendix

The following groups show how all SK-tagged maps fit into the story review. A name in the structural list means the map was still checked; it does not mean it contains a written story event.

### Story-bearing and regional dialogue maps

- **Erp and the laboratory:** `ErpCity`, `ErpusCity_StartHouse_1F`, `ErpusCity_StartHouse_2F`, `ErpusCity_BarryHouse_1F`, `ErpusCity_House3_1F`, `LabJariIndoor`, `LabJariIndoorF0`, `LabJariIndoorStorage`, `CaveHallwayJari`, `CaveCorridor`.
- **Maasje and Crabhill:** `Maasje`, `CrabhillEntrance`, `Indoor_Maasje_Jakub_Home`, `Indoor_Maasje_Beekeeper_Geurts`, `Indoor_Maasje_Home1`, `Indoor_Maasje_Home2`, `Maasje_Gym`, `Maasje_Mart`, `Maasje_PokemonCenter_1F`, `Maasje_PokemonCenter_2F`, `Maasje_Coastal_Cave2`, `Maasje_Coastal_Cave3`.
- **Routes to Mist:** `Route01`, `Route01_Forest`, `Route02`, `Route02_Indoor_Ranger_House`, `Route03`.
- **Mist and Deep Cloud Forest:** `MistCity`, `Mistcity_Research_Center`, `Mistcity_Research_Center_Entrance`, `Mistcity_Indoor_FacultySympathizer`, `Mistcity_Indoor_Gym`, `Mistcity_Indoor_MushroomShop`, `Mistcity_Indoor_Woodwork_Shop`, `Mistcity_Indoor_Old_Storyteller_Cabin`, `Mistcity_Indoor_PatternFinder_Father`, `Mistcity_Mart`, `Mistcity_PokemonCenter_1F`, `Mistcity_PokemonCenter_2F`, `DeepCloudForest_FacultyGorge`, `DeepCloudforest_FacultyAncientGrotto`, `InsideOfTruck`.
- **Route 04 and Siltroot:** `Batcave`, `Route04`, `Route04_CenterCave`, `SiltrootTown`, `SiltrootTown_Indoor_Ali_Apothecary`, `SiltrootTown_Indoor_Shed`, `SiltrootTown_Indoor_FacultyDefector`, `SiltrootTown_Indoor_House4`, `SiltrootTown_Indoor_Healer`, `SiltrootTown_Indoor_Pokecenter_1F`.
- **Lionsarch and the mountains:** `LionsarchCity`, `LionsarchCity_Indoor_Gym`, `LionsarchCity_Indoor_PeterHouse`, `LionsarchCity_Indoor_PeterBasementParty`, `LionsarchCity_Indoor_VisitorCenter`, `LionsarchCity_Indoor_House1`, `LionsarchCity_Indoor_House2`, `LionsarchCity_Indoor_House3`, `LionsarchCity_PokemonCenter_1F`, `LionsarchCity_Steel_Factory`, `LionsarchCity_Steel_Factory_B1F`, `LionsarchCity_Steel_Factory_2F`, `Route05`, `WestLionMountain`, `EastLionMountain`, `EastLionMountain_Faculty_Mining_Cave`, `EastLionMountain_Faculty_Mining_Cave_B1F`, `LionMountain_CaveSystem_Entrance`.
- **Eastern crossing:** `Route06`, `Route06_UpanaCave_MainRoom`, `Route06_UpanaCave_RiverRoom_B1F`, `BikePark`, `BikeShop_Jaouad`, `BikeRoute_House1`, `Route013_2`, `Route014`.
- **Marshduke:** `MarshDukeCity`, `Marshduk_Indoor_Mart`, `Marshduke_Indoor_PokemonCenter_1F`, `Marshduke_Indoor_Gym`, `Marshduke_Indoor_House1`, `Marshduke_Indoor_House4`, `Marshduke_Indoor_Chatedral`, `Marshduke_Indoor_Vision_LatiosLatias`.

### Checked maps with no local story dialogue

- **Small branches and support interiors:** `ErpusCity_BarryHouse_2F`, `LabJariIndoorBasementStairs1`, `Maasje_Coastal_Cave1`, `Maasje_Gym_Basement`, `DeepCloudForest_FacultyGorge_Restored`, `LionsarchCity_Indoor_House4`, `LionarchsCity_Indoor_Mart`, `LionsarchCity_PokemonCenter_2F`, `WestLionMountain_CableCar`, `WestLionMountain_SnowTop`, `Route06_UpanaCave_WestEntrance`.
- **Road and wilderness structure:** `Route07`, `Route08`, `Route09_DeepForestCore`, `Route09_SecretFiord`, `Route09_SecretWaterSource`, `Route10`, `Route011`, `Route012`, `Route01205`, `Route013`, `Route013_Estuary`, `Route014_Estuary`, `Route15`, `Route016`, `Route016_Eldwood_Entrance`, `Route017`, `Route018`, `Route019`, `Route020`, `Route021`, `Route022`, `Route023`.
- **Marshduke framework:** `Marshduke_Indoor_Cathedral_Garden_Gatehouse`, `Marshduke_Indoor_Garden`, `Marshduke_Indoor_Garden_Cemetery`, `Marshduke_Indoor_Garden_House1`, `Marshduke_Indoor_House1_2F`, `Marshduke_Indoor_House2`, `Marshduke_Indoor_House3`, `Marshduke_Indoor_House5`, `Marshduke_Indoor_House5_2F`, `Marshduke_Indoor_PokemonCenter_2F`, `Marshduke_Indoor_ResearchCenter`, `Marshduke_Indoor_ResearchCenter_2F`, `Marshduke_Indoor_Tower1_1F`, `Marshduke_Indoor_Tower1_2F`, `Marshduke_Indoor_Tower1_3F`, `Marshduke_Indoor_Vision_MewMewtwoo`.
- **Future towns and remote regions:** `AutumnRuins`, `BalkumTown`, `HezikTown`, `HezikTown_Secret_Garden`, `IndoorBernrodeGeneral`, `Island_Mecherchar`, `Island_Ohiana`, `TheShadowLands`, `UjeTown`, `Route14_Estuary_Indoor_Boathouse`, `Route14_Estuary_Indoor_House1`, `Route14_Estuary_Indoor_House2`, `Route14_Estuary_Indoor_House3`, `Route14_Estuary_Indoor_House4`, `Route14_Indoor_House1`, `Route16_Indoor_House1`, `Route16_Indoor_House2`.
- **Inherited Battle Pyramid support tagged for SK:** `BattleFrontier_BattlePyramidFloor_hns`, `BattleFrontier_BattlePyramidLobby_hns`, `BattleFrontier_BattlePyramidTop_hns`, `BattleFrontier_Lounge7_hns`, `BattlePyramidSquare01_hns`, `BattlePyramidSquare02_hns`, `BattlePyramidSquare03_hns`, `BattlePyramidSquare04_hns`, `BattlePyramidSquare05_hns`, `BattlePyramidSquare06_hns`, `BattlePyramidSquare07_hns`, `BattlePyramidSquare08_hns`, `BattlePyramidSquare09_hns`, `BattlePyramidSquare10_hns`, `BattlePyramidSquare11_hns`, `BattlePyramidSquare12_hns`, `BattlePyramidSquare13_hns`, `BattlePyramidSquare14_hns`, `BattlePyramidSquare15_hns`, and `BattlePyramidSquare16_hns`. These do not advance the Shiny Krabby narrative described above.

## Implemented-story summary

An aspiring researcher steals a starter from the erratic Professor Birds and is sent to investigate a prophetic Golden Krabby. The investigation exposes The Faculty, an organization that suppresses Pokemon individuality in the name of order. After saving Jacob in Maasje, the player joins Daan's rangers, encounters Mew, and fails to prevent The Rector from stealing Registeel from Deep Cloud Forest. Daan's contacts smuggle the player into industrial Lionsarch, where Wouter oversees the cleanup after Regice's extraction from mountain ice and nearly kills the player. With help from DJ Peter and potentially a small Aron, the player infiltrates the Steel Factory, can free its captive Pokemon, and defeats The Rector, but The Faculty ships Regice and its portable controllers out of the region. Daan sends the player onward to Marshduke. There, Ms. Stone points out the vanished abundance behind Mega Alakazam's legendary memories. The implemented story stops before the fourth Gym, with The Faculty still at large, Registeel missing, the Golden Krabby unresolved, and the player beginning to see how much ecological loss the region has learned to overlook.

## Planned full-story summary

Beyond Marshduke, the player reaches the dry gold-mining town of Balkum, where another Faculty operation captures Regirock despite the player's intervention and Mew witnesses a choice about saving other Pokemon. After the fossil-Pokemon Gym, Surf opens the Sudowoodo-blocked route to Hezik. There the player learns that the three golems, including the already-known captive Regice, will be forced to imprison Mew, the embodiment of natural diversity. The headquarters falls; only The Rector and Barry escape with the guardians, while The Conrector remains defeated at Hezik.

While traveling with Daan through volcanic-island Uje Town and Veghel City, provisionally set in a bamboo forest, the player learns about shiny powers and seeks the Golden Krabby, whose resistance to the early control device can break the final signal. Birds also pursues Mew using information accumulated through the player's Pokedex. The player defeats the final containment attempt. Mew leaves a feather during its rage as it breaks free; Birds fails comically to capture Mew but obtains that feather, later accidentally creating Mewtwo for a post-Elite Four encounter. The cathedral's revised Mew-only creation dialogue replaces its earlier Mewtwo story, while the final confrontation becomes the sixth vision.

The wider region will also include Boekel, a one-house town whose redheaded resident is never home, and a broad northern plain or savanna with safari activities on the approach to the far-northern Pokemon League. Their exact route placement and details remain preliminary. Celebi, whose journeys through time supplied the ecological message to Alakazam, can be encountered in the ancient forest west of Marshduke in the postgame.
