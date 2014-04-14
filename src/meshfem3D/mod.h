  integer maxl
  integer maxcoe
  integer maxhpa
  integer maxker
  integer maxver

  parameter (maxker=200)
  parameter (maxl=72)
  parameter (maxcoe=2000)
  parameter (maxver=1000)
  parameter (maxhpa=2)

  integer numker
  integer numhpa,numcof
  integer ihpa,lmax,nylm
  integer lmxhpa(maxhpa)
  integer itypehpa(maxhpa)
  integer ihpakern(maxker)
  integer numcoe(maxhpa)
  integer ivarkern(maxker)
  integer itpspl(maxcoe,maxhpa)

  integer nconpt(maxhpa),iver
  integer iconpt(maxver,maxhpa)
  real*4 conpt(maxver,maxhpa)

  real*4 xlaspl(maxcoe,maxhpa)
  real*4 xlospl(maxcoe,maxhpa)
  real*4 radspl(maxcoe,maxhpa)
  real*4 coe(maxcoe,maxker)
  character(len=80) hsplfl(maxhpa)
  character(len=40) dskker(maxker)
  real*4 vercof(maxker)
  real*4 vercofd(maxker)

  real*4 ylmcof((maxl+1)**2,maxhpa)
  real*4 wk1(maxl+1)
  real*4 wk2(maxl+1)
  real*4 wk3(maxl+1)

  character(len=80) kerstr
  character(len=80) refmdl
  character(len=40) varstr(maxker)

        common /mod/ numker,numhpa,numcof,ihpa,lmax,nylm, lmxhpa,itypehpa,ihpakern,numcoe,ivarkern,itpspl, &
       nconpt,iver,iconpt,conpt,xlaspl,xlospl,radspl, coe,hsplfl,dskker,vercof,vercofd,ylmcof,wk1,wk2,wk3, kerstr,varstr,refmdl

