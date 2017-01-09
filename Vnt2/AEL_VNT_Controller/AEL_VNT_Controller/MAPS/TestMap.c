volatile int TestMapA[46][20] = {
/*RPM/Throttle%*/
//			   0%	5%	10%	 15%  20%  25%  30%  35%  40%  45%  50%  55%  60%  65%  70%  75%  80%  85%  90%  95% 100%
/* 900*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 1000*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 1100*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 1200*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 1300*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 1400*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 1500*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 1600*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 1700*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 1800*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 1900*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 2000*/	{ 100, 200, 305, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 2100*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 2200*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 2300*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 2400*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 2500*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 2600*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 2700*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 2800*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 2900*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 3000*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 3100*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 3200*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 3300*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 3400*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 3500*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 3600*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 3700*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 3800*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 3900*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 4000*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 4100*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 4200*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 4300*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 4400*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 4500*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 4600*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 4700*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 4800*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 4900*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 5000*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 5100*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 5200*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 5300*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 5400*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500},
/* 5500*/	{ 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2500}

	
};