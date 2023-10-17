//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreTelephony/NSObject-Protocol.h>

@class CTQoSLinkCharacteristics, NSString;

@protocol CoreTelephonyClientProvisioningDelegateInternal <NSObject>

@optional
- (void)qoSLinkCharacteristicsChanged:(CTQoSLinkCharacteristics *)arg1;
- (void)dedicatedBearedRemoved:(NSString *)arg1;
- (void)dedicatedBearerAdded:(NSString *)arg1 success:(_Bool)arg2;
- (void)dedicatedBearerSupportChanged:(_Bool)arg1;
@end

