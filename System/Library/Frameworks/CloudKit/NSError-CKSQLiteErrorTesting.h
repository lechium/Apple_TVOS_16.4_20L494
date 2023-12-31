//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (CKSQLiteErrorTesting)
+ (id)CKErrorFromErrno;	// IMP=0x00200000000ac92d
+ (id)CKErrorWithPOSIXCode:(int)arg1;	// IMP=0x00200000000ac834
- (_Bool)CK_isCKSQLiteError;	// IMP=0x001000000008b6f2
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;	// IMP=0x00100000000ac9cb
- (_Bool)CKIsPOSIXErrorCode:(long long)arg1;	// IMP=0x00100000000ac957
- (void)CKAssignToContainerWithID:(id)arg1;	// IMP=0x00100000000aed24
- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00100000001b0936
@property(readonly, nonatomic, getter=isComparisonError) _Bool comparisonError;
- (id)CKErrorScopedToZoneIDs:(id)arg1;	// IMP=0x0010000000201e04
- (_Bool)CKHasTopLevelUnderlyingError;	// IMP=0x0010000000201ced
- (_Bool)CKHasCKErrorInChildChain;	// IMP=0x0010000000201c5c
- (_Bool)CKIsCKError;	// IMP=0x0010000000201bc5
- (_Bool)CKIsObjectNotFoundError;	// IMP=0x0010000000201b53
- (_Bool)CKIsNotFoundError;	// IMP=0x0010000000201a94
- (id)CKClientSuitableErrorSpecificUserInfo;	// IMP=0x00100000002019b4
- (id)CKClientSuitableUnderlyingError;	// IMP=0x0010000000201765
- (id)CKClientSuitableError;	// IMP=0x0010000000200f48
@end

