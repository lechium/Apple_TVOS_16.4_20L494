//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TURoute, UIButton, UIImage, UIMenu, UIView, UIViewController;
@protocol CNKFaceTimePiPSourceProviding;

@protocol CNKFaceTimeMultiwayConversationViewControllerDelegate
- (UIView *)bottomControlsViewForViewController:(UIViewController *)arg1;
- (UIView *)callParticipantLabelsViewForViewController:(UIViewController *)arg1;
@property(nonatomic, readonly) UIImage *audioRouteGlyphForDevice;
- (UIImage *)audioRouteGlyphFor:(TURoute *)arg1 buttonStyle:(long long)arg2;
- (UIImage *)audioRouteGlyphFor:(TURoute *)arg1;
- (UIMenu *)audioRouteMenu;
- (void)viewController:(UIViewController *)arg1 fullScreenFocusedParticipantAspectRatioChanged:(struct CGSize)arg2 participantGridIsFullScreen:(_Bool)arg3;
- (void)viewController:(UIViewController *)arg1 fullScreenFocusedParticipantOrientationChanged:(long long)arg2;
- (void)viewControllerDidRequestTemporaryPreventSuspension:(UIViewController *)arg1;
- (void)viewController:(UIViewController *)arg1 setStatusBarHidden:(_Bool)arg2;
- (void)viewControllerDidRequestAddParticipants:(UIViewController *)arg1;

@optional
- (void)didTapDeskViewButton;
- (void)didChangeCaptionsLayout;
- (void)viewController:(UIViewController *)arg1 localParticipantAspectRatioChanged:(struct CGSize)arg2;
- (void)viewControllerMinimizedLocalPreview:(UIViewController *)arg1;
- (double)viewController:(UIViewController *)arg1 rubberBandConstrained:(double)arg2 inRange:(double)arg3;
- (void)viewController:(UIViewController *)arg1 mediaPipSafeAreaFrameChanged:(struct CGRect)arg2;
- (void)participantsDidChangeLocationIn:(UIViewController *)arg1;
- (void)viewController:(UIViewController *)arg1 pipSourceProviderNeedsUpdate:(id <CNKFaceTimePiPSourceProviding>)arg2;
- (void)updateCallParticipantLabelsViewForViewController:(UIViewController *)arg1;
- (UIButton *)customOverrideOneToOneShutterButtonForViewController:(UIViewController *)arg1;
@end

