//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (AuthKit)
+ (id)ak_wrappedAnisetteError:(int)arg1;	// IMP=0x0080000000051c80
+ (id)ak_errorWithCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x0080000000051bad
+ (id)ak_errorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0080000000051b87
+ (id)ak_errorWithCode:(long long)arg1;	// IMP=0x0080000000051b73
- (_Bool)ak_isAuthenticationError;	// IMP=0x0010000000051fba
- (_Bool)ak_isAuthenticationErrorWithCode:(long long)arg1;	// IMP=0x0010000000051f7d
- (_Bool)ak_isIncompatibleDevicesError;	// IMP=0x0010000000051f3f
- (_Bool)ak_isSurrogateAuthAlreadyInProgressError;	// IMP=0x0010000000051f01
- (_Bool)ak_isUnableToPromptError;	// IMP=0x0010000000051ec3
- (_Bool)ak_isServiceError;	// IMP=0x0010000000051e69
- (_Bool)ak_isUserInitiatedError;	// IMP=0x0010000000051e30
- (_Bool)ak_isUserTryAgainError;	// IMP=0x0010000000051df2
- (_Bool)ak_isUserSkippedError;	// IMP=0x0010000000051db4
- (_Bool)ak_isUserCancelError;	// IMP=0x0010000000051d76
- (id)ak_errorByAppendingUserInfo:(id)arg1;	// IMP=0x0010000000051a3e
@end

