//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface APSMultiUserMode : NSObject
{
    _Bool _isMultiUser;	// 8 = 0x8
    _Bool _isLoggedInUser;	// 9 = 0x9
}

+ (_Bool)_getIsCurrentlyLoggedIn;	// IMP=0x0040000000004070
+ (_Bool)_getMultiUserMode;	// IMP=0x0010000000004068
+ (id)sharedInstance;	// IMP=0x0010000000003f82
@property(readonly, nonatomic) _Bool isLoggedInUser; // @synthesize isLoggedInUser=_isLoggedInUser;
// Error: Property attributes should begin with the type ('T') attribute, property name: isMultiUser
// Property attributes: (null)

- (_Bool)isMultiAndLoggedIn;	// IMP=0x00100000000040be
- (id)initWithIsMultiUserMode:(_Bool)arg1 loggedInUser:(_Bool)arg2;	// IMP=0x0010000000004078

@end

