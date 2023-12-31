//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VNMPContext;

__attribute__((visibility("hidden")))
@interface VNMomentProcessor : NSObject
{
    VNMPContext *_context;	// 8 = 0x8
}

+ (id)sortImageDescriptorsChronologically:(id)arg1;	// IMP=0x006000000009ece9
- (void).cxx_destruct;	// IMP=0x000000000009e94e
@property(retain, nonatomic) VNMPContext *context; // @synthesize context=_context;
- (id)getKey:(id)arg1 fromDictionary:(id)arg2 withDefault:(id)arg3;	// IMP=0x000000000009e86a
- (id)computeNaturalClusteringForClusteringTree:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009e71d
- (id)computeClusteringForClusteringTree:(id)arg1 usingThreshold:(float)arg2 error:(id *)arg3;	// IMP=0x000000000009e5c6
- (id)computeClusteringForClusteringTree:(id)arg1 intoKGroups:(int)arg2 error:(id *)arg3;	// IMP=0x000000000009e471
- (id)performClustersPostprocessing:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009e45b
- (id)convertClusterNodesListToDescriptorsList:(vector_f43821d3)arg1;	// IMP=0x000000000009e320
- (id)computeClusteringTreeForImageDescriptors:(id)arg1 assumeDescriptorsAreSorted:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000009e180
- (id)computeClusteringTreeForImageDescriptors:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009e159
- (id)computeNaturalClusteringOfImageDescriptors:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009e084
- (id)computeClusteringOfImageDescriptors:(id)arg1 intoKGroups:(int)arg2 error:(id *)arg3;	// IMP=0x000000000009dfa0
- (id)initWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009d8e3

@end

