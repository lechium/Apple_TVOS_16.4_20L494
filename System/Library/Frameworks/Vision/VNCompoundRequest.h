//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VNRequest.h"

@class NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface VNCompoundRequest : VNRequest
{
    NSArray *_originalRequests;	// 8 = 0x8
    NSNumber *_cachedDependencyProcessingOrdinality;	// 16 = 0x10
}

+ (id)compoundRequestProcessingDeviceFromOriginalRequestsProcessingDevice:(id)arg1;	// IMP=0x0060000000287137
+ (id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;	// IMP=0x0060000000287063
- (void).cxx_destruct;	// IMP=0x0000000000286d96
@property(readonly, copy, nonatomic) NSArray *originalRequests; // @synthesize originalRequests=_originalRequests;
- (id)description;	// IMP=0x0000000000286ba6
- (unsigned long long)ioSurfaceMemoryPoolId;	// IMP=0x0000000000286aa2
- (_Bool)usesCPUOnly;	// IMP=0x000000000028696c
- (void)recordWarningsInOriginalRequests;	// IMP=0x00000000002868ac
@property(readonly, nonatomic) struct CGRect regionOfInterest;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002865c0
- (long long)dependencyProcessingOrdinality;	// IMP=0x00000000002863dc
- (id)sequencedRequestPreviousObservationsKey;	// IMP=0x00000000002863d4
- (_Bool)resultsAreAssignedWithOriginatingRequestSpecifier;	// IMP=0x00000000002863cc
- (_Bool)allowsCachingOfResults;	// IMP=0x00000000002863c4
- (id)compoundResults;	// IMP=0x000000000028622a
- (id)initWithOriginalRequests:(id)arg1;	// IMP=0x00000000002861b0

@end
