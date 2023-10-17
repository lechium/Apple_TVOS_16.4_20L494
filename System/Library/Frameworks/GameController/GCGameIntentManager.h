//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

__attribute__((visibility("hidden")))
@interface GCGameIntentManager : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    NSUserDefaults *_defaults;	// 16 = 0x10
    unsigned long long _currentCategory;	// 24 = 0x18
}

+ (id)instance;	// IMP=0x006000000003b10f
- (void).cxx_destruct;	// IMP=0x000000000003b514
- (void)launchToSpringboard;	// IMP=0x000000000003b50e
- (void)toggleGamesFolderAndDismissOnly:(_Bool)arg1;	// IMP=0x000000000003b508
- (void)toggleGamesFolder;	// IMP=0x000000000003b4f4
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000003b385
- (void)dealloc;	// IMP=0x000000000003b339
- (id)init;	// IMP=0x000000000003b1bb

@end

