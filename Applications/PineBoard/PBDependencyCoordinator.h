//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface PBDependencyCoordinator : NSObject
{
    NSMapTable *_classesToInstances;	// 8 = 0x8
}

+ (void)registerInstance:(id)arg1 dependencyBlock:(CDUnknownBlockType)arg2;	// IMP=0x004000000009ac8b
+ (id)sharedInstance;	// IMP=0x001000000009ac34
- (void).cxx_destruct;	// IMP=0x002000000009b42c
@property(retain, nonatomic) NSMapTable *classesToInstances; // @synthesize classesToInstances=_classesToInstances;
- (void)_registerInstance:(id)arg1 dependencyBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000009ad7a
- (id)init;	// IMP=0x001000000009ad14

@end
