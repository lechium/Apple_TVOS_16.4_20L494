//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/NSObject-Protocol.h>

@class AMSPromise;

@protocol AMSMediaTokenServiceProtocol <NSObject>
- (void)invalidateMediaToken;
- (AMSPromise *)fetchMediaToken;
@end

