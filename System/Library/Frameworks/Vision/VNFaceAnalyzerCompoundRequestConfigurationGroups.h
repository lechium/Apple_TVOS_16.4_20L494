//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VNFaceAnalyzerCompoundRequestConfigurationGroups : NSObject
{
    NSMutableDictionary *_generalConfigurations;	// 8 = 0x8
    NSMutableDictionary *_observationGroupConfigurations;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000761fb
- (unsigned long long)count;	// IMP=0x00000000000761bc
- (id)allConfigurations;	// IMP=0x00000000000760f4
- (id)configurationForRequest:(id)arg1 withObservationGroup:(id)arg2 compoundRequestRevision:(unsigned long long)arg3;	// IMP=0x0000000000075d6d
- (id)init;	// IMP=0x0000000000075cdc

@end

