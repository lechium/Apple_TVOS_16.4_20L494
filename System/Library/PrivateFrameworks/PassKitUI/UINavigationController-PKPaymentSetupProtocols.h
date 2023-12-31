//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@interface UINavigationController (PKPaymentSetupProtocols)
- (void)_pk_popViewControllersFromViewController:(id)arg1 toViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x009000000018efc5
- (void)_pk_popToViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x009000000018ee0c
- (_Bool)_pk_popToViewControllerPresentationMarker:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x009000000018eb60
- (void)_pk_presentPaymentSetupViewController:(id)arg1 animated:(_Bool)arg2 performPreflight:(_Bool)arg3 delay:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x009000000018df8a
- (void)pk_presentPaymentSetupViewController:(id)arg1 animated:(_Bool)arg2 delay:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x009000000018df5f
- (void)pk_presentPaymentSetupViewController:(id)arg1 animated:(_Bool)arg2 performPreflight:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x009000000018df3d
- (void)pk_presentPaymentSetupViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x009000000018df15
- (void)pk_applyAppearance:(id)arg1;	// IMP=0x00900000002267e6
- (id)pk_childrenForAppearance;	// IMP=0x00900000002266d4
- (id)pkui_compactNavigationContainer;	// IMP=0x009000000043d6a1
@end

