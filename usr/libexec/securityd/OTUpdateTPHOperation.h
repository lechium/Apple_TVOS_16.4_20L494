//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperation, NSString, OTOperationDependencies;
@protocol OctagonFlagString, OctagonStateString;

@interface OTUpdateTPHOperation
{
    _Bool _forceRefetch;	// 10 = 0xa
    NSString<OctagonStateString> *_nextState;	// 16 = 0x10
    NSString<OctagonStateString> *_intendedState;	// 24 = 0x18
    OTOperationDependencies *_deps;	// 32 = 0x20
    NSString<OctagonStateString> *_peerUnknownState;	// 40 = 0x28
    NSString<OctagonStateString> *_determineCDPState;	// 48 = 0x30
    NSOperation *_finishedOp;	// 56 = 0x38
    NSString<OctagonFlagString> *_retryFlag;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000ce8e4
@property(retain) NSString<OctagonFlagString> *retryFlag; // @synthesize retryFlag=_retryFlag;
@property(retain) NSOperation *finishedOp; // @synthesize finishedOp=_finishedOp;
@property(retain) NSString<OctagonStateString> *determineCDPState; // @synthesize determineCDPState=_determineCDPState;
@property(retain) NSString<OctagonStateString> *peerUnknownState; // @synthesize peerUnknownState=_peerUnknownState;
@property _Bool forceRefetch; // @synthesize forceRefetch=_forceRefetch;
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
- (void)groupStart;	// IMP=0x00100000000ce1a5
- (id)initWithDependencies:(id)arg1 intendedState:(id)arg2 peerUnknownState:(id)arg3 determineCDPState:(id)arg4 errorState:(id)arg5 forceRefetch:(_Bool)arg6 retryFlag:(id)arg7;	// IMP=0x00100000000ce057

@end
