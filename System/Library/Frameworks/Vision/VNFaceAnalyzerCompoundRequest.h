//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNFaceAnalyzerCompoundRequest
{
}

+ (Class)configurationClass;	// IMP=0x008000000007798a
+ (id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;	// IMP=0x0080000000076f52
+ (const CDStruct_7d93034e *)revisionAvailability;	// IMP=0x008000000007824d
- (void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2;	// IMP=0x0000000000076825
- (unsigned long long)detectionLevel;	// IMP=0x0000000000076794
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007646c
- (id)initWithDetectorType:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000000076235
- (long long)dependencyProcessingOrdinality;	// IMP=0x0000000000076223

@end
