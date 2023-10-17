//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CADOperationGroup.h"

__attribute__((visibility("hidden")))
@interface CADObjectOperationGroup : CADOperationGroup
{
}

+ (_Bool)requiresEventAccess;	// IMP=0x0010000000008f35
- (void)CADObjectIsManaged:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000bbc8
- (void)CADObject:(id)arg1 getRelatedObjectsWithRelationName:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b766
- (void)CADObject:(id)arg1 getRelatedObjectWithRelationName:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b31b
- (void)CADObject:(id)arg1 getSecurityScopedURLWrapperPropertyWithName:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000000af17
- (_Bool)_requiresSpecialEntitlementToReadSecurityScopedURLWrapperForProperty:(id)arg1;	// IMP=0x000000000000ae91
- (void)CADObject:(id)arg1 getDataPropertyWithName:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000000aaf8
- (void)CADObject:(id)arg1 getDatePropertyWithName:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000000a75f
- (void)CADObject:(id)arg1 getNumberPropertyWithName:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000000a3c6
- (void)CADObject:(id)arg1 getStringPropertyWithName:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000000a02d
- (void)CADObject:(id)arg1 getPropertyWithName:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009c94
- (void)CADObjects:(id)arg1 getPropertiesWithNames:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000098a2
- (void)CADObject:(id)arg1 getPropertiesWithNames:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009484
- (void)CADObjectsExist:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000090ff
- (void)CADObjectExists:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008f3d

@end
