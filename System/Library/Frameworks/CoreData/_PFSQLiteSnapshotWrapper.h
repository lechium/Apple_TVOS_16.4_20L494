//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _PFSQLiteSnapshotWrapper : NSObject
{
    struct sqlite3_snapshot *_s;	// 8 = 0x8
    int _externalReferences;	// 16 = 0x10
    int _flags;	// 20 = 0x14
}

- (long long)compare:(id)arg1;	// IMP=0x00000000001a2b6a
- (void)dealloc;	// IMP=0x00000000001a2b00
@property(readonly, nonatomic) const void *bytes;
- (id)description;	// IMP=0x00000000001a2a7b
- (unsigned long long)hash;	// IMP=0x00000000001a2a5f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a2a13
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a2a01
- (id)mutableCopy;	// IMP=0x00000000001a2984
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a2979

@end
