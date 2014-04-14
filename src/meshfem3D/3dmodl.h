      parameter (mxhpar=2)
      parameter (mxkern=200)
      parameter (mxcoef=2000)
      character(len=80) refmodel
      character(len=80) kernstri
      character(len=40) desckern(mxkern)
      character(len=80) hsplfile(mxhpar)
      dimension ihorpar(mxkern)
      dimension ityphpar(mxhpar)
      dimension coef(mxcoef,mxkern)
      dimension xlaspl(mxcoef,mxhpar)
      dimension xlospl(mxcoef,mxhpar)
      dimension xraspl(mxcoef,mxhpar)
      dimension ixlspl(mxcoef,mxhpar)
      dimension lmaxhor(mxhpar)
      dimension ncoefhor(mxhpar)

      common /tdmodl/ nmodkern,nhorpar,ityphpar, ihorpar,lmaxhor,ncoefhor, xlaspl,xlospl,xraspl,ixlspl,coef, &
                        hsplfile,refmodel,kernstri,desckern

