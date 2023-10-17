//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperation, NSString, OTOperationDependencies;
@protocol OctagonStateString;

@interface OTJoinSOSAfterCKKSFetchOperation
{
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    NSString<OctagonStateString> *_nextState;	// 24 = 0x18
    OTOperationDependencies *_operationDependencies;	// 32 = 0x20
    NSOperation *_finishedOp;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000838ae
@property(retain) NSOperation *finishedOp; // @synthesize finishedOp=_finishedOp;
@property(retain) OTOperationDependencies *operationDependencies; // @synthesize operationDependencies=_operationDependencies;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
- (void)proceedAfterFetch;	// IMP=0x001000000008335c
- (void)groupStart;	// IMP=0x0010000000083067
- (id)initWithDependencies:(id)arg1 intendedState:(id)arg2 errorState:(id)arg3;	// IMP=0x0010000000082fa1

@end
