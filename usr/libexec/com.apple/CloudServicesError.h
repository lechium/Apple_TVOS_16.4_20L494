//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CloudServicesError : NSObject
{
}

+ (id)errorForNSError:(id)arg1 path:(id)arg2 format:(id)arg3;	// IMP=0x0040000000060d3c
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 format:(id)arg3;	// IMP=0x0010000000060bc2
+ (id)errorWithCode:(long long)arg1 error:(id)arg2 URL:(id)arg3 format:(id)arg4;	// IMP=0x0010000000060a02
+ (id)errorWithCode:(long long)arg1 URL:(id)arg2 format:(id)arg3;	// IMP=0x001000000006086d
+ (id)errorWithCode:(long long)arg1 error:(id)arg2 format:(id)arg3;	// IMP=0x00100000000606d8
+ (id)errorWithCode:(long long)arg1 format:(id)arg2;	// IMP=0x0010000000060570
+ (id)sanitizedError:(id)arg1;	// IMP=0x001000000006047a
+ (long long)codeForErrno:(long long)arg1;	// IMP=0x00100000000603c8
+ (long long)codeForNSError:(id)arg1;	// IMP=0x0010000000060188

@end
