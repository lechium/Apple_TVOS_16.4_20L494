//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSKeyValueContainerClass, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueProperty : NSObject
{
    NSKeyValueContainerClass *_containerClass;	// 8 = 0x8
    NSString *_keyPath;	// 16 = 0x10
}

- (_Bool)matchesWithoutOperatorComponentsKeyPath:(id)arg1;	// IMP=0x000000000046890a
- (id)restOfKeyPathIfContainedByValueForKeyPath:(id)arg1;	// IMP=0x000000000046883d
- (id)dependentValueKeyOrKeysIsASet:(_Bool *)arg1;	// IMP=0x0000000000468835
- (void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672)arg5;	// IMP=0x000000000046882f
- (_Bool)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672 *)arg5;	// IMP=0x000000000046881d
- (void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(_Bool)arg3;	// IMP=0x0000000000468817
- (void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(_Bool)arg3;	// IMP=0x0000000000468811
- (id)keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;	// IMP=0x00000000004687ff
- (id)keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(_Bool *)arg2;	// IMP=0x00000000004687ed
- (Class)isaForAutonotifying;	// IMP=0x00000000004687db
- (id)keyPath;	// IMP=0x00000000004687d1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004687c6
- (void)dealloc;	// IMP=0x0000000000468759
- (id)_initWithContainerClass:(id)arg1 keyPath:(id)arg2 propertiesBeingInitialized:(struct __CFSet *)arg3;	// IMP=0x00000000004686b9

@end
