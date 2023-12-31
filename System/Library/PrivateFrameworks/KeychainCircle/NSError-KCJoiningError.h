//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (KCJoiningError)
+ (id)errorWithJoiningError:(int)arg1 format:(id)arg2;	// IMP=0x006000000001aaf5
+ (id)errorWithJoiningError:(int)arg1 format:(id)arg2 arguments:(struct __va_list_tag [1])arg3;	// IMP=0x006000000001a9f0
+ (id)errorWithCoreCryptoStatus:(int)arg1 description:(id)arg2 args:(struct __va_list_tag [1])arg3;	// IMP=0x006000000001c0b3
+ (id)errorWithCoreCryptoStatus:(int)arg1 userInfo:(id)arg2;	// IMP=0x006000000001c057
+ (id)errorWithOSStatus:(int)arg1 description:(id)arg2 args:(struct __va_list_tag [1])arg3;	// IMP=0x006000000001bff6
+ (id)errorWithOSStatus:(int)arg1 userInfo:(id)arg2;	// IMP=0x006000000001bf9a
- (id)initWithJoiningError:(int)arg1 userInfo:(id)arg2;	// IMP=0x001000000001a9d2
- (id)initWithCoreCryptoStatus:(int)arg1 description:(id)arg2 args:(struct __va_list_tag [1])arg3;	// IMP=0x001000000001be72
- (id)initWithCoreCryptoStatus:(int)arg1 userInfo:(id)arg2;	// IMP=0x001000000001be53
- (id)initWithOSStatus:(int)arg1 description:(id)arg2 args:(struct __va_list_tag [1])arg3;	// IMP=0x001000000001bdfd
- (id)initWithOSStatus:(int)arg1 userInfo:(id)arg2;	// IMP=0x001000000001bdd8
@end

