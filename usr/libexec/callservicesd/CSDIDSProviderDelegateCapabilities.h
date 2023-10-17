//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSDIDSProviderDelegateCapabilities : NSObject
{
}

- (_Bool)isCellularDataPreferred;	// IMP=0x00400000002a8b40
- (_Bool)isCellularDataAllowed;	// IMP=0x00100000002a8b20
- (_Bool)isCellularDataAvailable;	// IMP=0x00100000002a8a80
- (_Bool)isWiFiAllowed;	// IMP=0x00100000002a8a70
- (_Bool)isWiFiAvailable;	// IMP=0x00100000002a8a50
- (id)init;	// IMP=0x00100000002a8a30

// Remaining properties
@property(nonatomic, readonly) _Bool cellularDataAllowed;
@property(nonatomic, readonly) _Bool cellularDataAvailable;
@property(nonatomic, readonly) _Bool cellularDataPreferred;
@property(nonatomic, readonly) _Bool wiFiAllowed;
@property(nonatomic, readonly) _Bool wiFiAvailable;

@end

