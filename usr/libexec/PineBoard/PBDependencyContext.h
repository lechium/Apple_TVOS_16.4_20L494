//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableSet;

@interface PBDependencyContext : NSObject
{
    NSMutableSet *_fetchedInstanceClasses;	// 8 = 0x8
    NSMapTable *_classesToInstances;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000009b70b
@property(retain, nonatomic) NSMapTable *classesToInstances; // @synthesize classesToInstances=_classesToInstances;
@property(retain, nonatomic) NSMutableSet *fetchedInstanceClasses; // @synthesize fetchedInstanceClasses=_fetchedInstanceClasses;
- (id)instanceForClass:(Class)arg1;	// IMP=0x001000000009b62e
- (id)init;	// IMP=0x001000000009b5a9

@end

