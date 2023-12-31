//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SHLError : NSObject
{
}

+ (id)localizedRecoverySuggestionForSyncError:(long long)arg1;	// IMP=0x0040000000020768
+ (id)localizedFailureReasonForSyncError:(long long)arg1;	// IMP=0x0010000000020744
+ (id)localizedDescriptionForSyncError:(long long)arg1;	// IMP=0x0010000000020720
+ (long long)errorCodeForError:(id)arg1;	// IMP=0x001000000002066e
+ (id)userInfoForErrorCode:(long long)arg1 withUnderlyingError:(id)arg2;	// IMP=0x001000000002050e
+ (id)errorCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x00100000000204a1
+ (_Bool)canRetryForPartialError:(id)arg1;	// IMP=0x00100000000203a4
+ (_Bool)canRetryForError:(id)arg1;	// IMP=0x0010000000020289
+ (double)retrySecondsForError:(id)arg1;	// IMP=0x001000000001ffab
+ (id)errorWithUnderlyingError:(id)arg1;	// IMP=0x001000000001ff30
+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x001000000001ff17
+ (id)errorWithCode:(long long)arg1;	// IMP=0x001000000001fefc

@end

