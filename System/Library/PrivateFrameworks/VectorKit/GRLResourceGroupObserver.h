//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GRLResourceGroupObserver : NSObject
{
    void *_resourceProvider;	// 8 = 0x8
    struct mutex _resourceProviderLock;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x0000000000637087
- (void).cxx_destruct;	// IMP=0x0000000000637079
- (void)clearProvider;	// IMP=0x000000000063704f
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;	// IMP=0x000000000063701f
- (id)initWithResourceProvider:(void *)arg1;	// IMP=0x0000000000636fe2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

