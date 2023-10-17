//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSFileSecurity.h"

__attribute__((visibility("hidden")))
@interface __NSFileSecurity : NSFileSecurity
{
    struct _filesec *_filesec;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000016fc42
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000016f9c4
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x001000000016f9c1
+ (id)__new:(struct _filesec *)arg1;	// IMP=0x001000000016ec4b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000016fc3f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000016f9d8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016f94d
- (id)description;	// IMP=0x000000000016f5fc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016f2e0
- (unsigned long long)hash;	// IMP=0x000000000016f1d0
- (void)dealloc;	// IMP=0x000000000016f167
- (_Bool)clearProperties:(unsigned long long)arg1;	// IMP=0x000000000016f06f
- (_Bool)setAccessControlList:(struct _acl *)arg1;	// IMP=0x000000000016f00e
- (_Bool)copyAccessControlList:(struct _acl **)arg1;	// IMP=0x000000000016ef8d
- (_Bool)setGroupUUID:(unsigned char [16])arg1;	// IMP=0x000000000016ef6d
- (_Bool)getGroupUUID:(unsigned char (*)[16])arg1;	// IMP=0x000000000016ef0e
- (_Bool)setOwnerUUID:(unsigned char [16])arg1;	// IMP=0x000000000016eeee
- (_Bool)getOwnerUUID:(unsigned char (*)[16])arg1;	// IMP=0x000000000016ee8f
- (_Bool)setMode:(unsigned short)arg1;	// IMP=0x000000000016ee3a
- (_Bool)getMode:(unsigned short *)arg1;	// IMP=0x000000000016eddb
- (_Bool)setGroup:(unsigned int)arg1;	// IMP=0x000000000016ed87
- (_Bool)getGroup:(unsigned int *)arg1;	// IMP=0x000000000016ed2a
- (_Bool)setOwner:(unsigned int)arg1;	// IMP=0x000000000016ecd6
- (_Bool)getOwner:(unsigned int *)arg1;	// IMP=0x000000000016ec79
- (struct _filesec *)_filesec;	// IMP=0x000000000016ec6d

@end

