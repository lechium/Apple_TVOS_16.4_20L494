//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

@class MISSING_TYPE;

@interface UAAuditToken : NSValue
{
    MISSING_TYPE *_auditTokenValue;	// 8 = 0x8
}

@property(readonly) CDStruct_6ad76789 auditTokenValue; // @synthesize auditTokenValue=_auditTokenValue;
- (id)debugDescription;	// IMP=0x0010000000080205
- (id)description;	// IMP=0x0010000000080111
- (const char *)objCType;	// IMP=0x0010000000080104
- (void)getValue:(void *)arg1;	// IMP=0x00100000000800e7
@property(readonly, getter=isSandboxed) _Bool sandboxed; // @dynamic sandboxed;
@property(readonly) int asid; // @dynamic asid;
@property(readonly) unsigned int rgid; // @dynamic rgid;
@property(readonly) unsigned int egid; // @dynamic egid;
@property(readonly) unsigned int ruid; // @dynamic ruid;
@property(readonly) unsigned int euid; // @dynamic euid;
@property(readonly) int pidVersion; // @dynamic pidVersion;
@property(readonly) int pid; // @dynamic pid;
- (id)initWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x001000000007fde0

@end

