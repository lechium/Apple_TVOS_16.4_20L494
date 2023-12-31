//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNImageAnalyzerCompoundRequestGroupingConfiguration;

__attribute__((visibility("hidden")))
@interface VNImageAnalyzerCompoundRequest
{
    VNImageAnalyzerCompoundRequestGroupingConfiguration *_groupingConfiguration;	// 8 = 0x8
}

+ (Class)configurationClass;	// IMP=0x006000000006a09d
+ (id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;	// IMP=0x0060000000068302
- (void).cxx_destruct;	// IMP=0x0000000000067ed4
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000678c8
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;	// IMP=0x000000000006734a
- (_Bool)allowsCachingOfResults;	// IMP=0x0000000000067342
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;	// IMP=0x0000000000067273
- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000006720f
- (id)initWithDetectorType:(id)arg1 groupingConfiguration:(id)arg2;	// IMP=0x0000000000066e07

@end

