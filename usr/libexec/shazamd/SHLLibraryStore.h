//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SHLCloudContainerTransformer, SHLSyncSessionConfiguration;
@protocol SHLLibraryCache;

@interface SHLLibraryStore : NSObject
{
    id <SHLLibraryCache> _currentCache;	// 8 = 0x8
    SHLSyncSessionConfiguration *_configuration;	// 16 = 0x10
    SHLCloudContainerTransformer *_containerTransformer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000ef2d
@property(retain, nonatomic) SHLCloudContainerTransformer *containerTransformer; // @synthesize containerTransformer=_containerTransformer;
@property(retain, nonatomic) SHLSyncSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) id <SHLLibraryCache> currentCache; // @synthesize currentCache=_currentCache;
- (id)initWithConfiguration:(id)arg1;	// IMP=0x001000000000ec87

@end

