//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TVImageProxy;

@interface TVSBInformationalBulletinViewController
{
    TVImageProxy *_imageProxy;	// 8 = 0x8
}

+ (_Bool)_isVolumeBulletin:(id)arg1;	// IMP=0x004000000001d030
- (void).cxx_destruct;	// IMP=0x002000000001f670
@property(retain, nonatomic) TVImageProxy *imageProxy; // @synthesize imageProxy=_imageProxy;
- (id)_bulletinImageForItem:(id)arg1;	// IMP=0x001000000001dfd0
- (void)_configureVolumeBulletinView:(id)arg1 forBulletin:(id)arg2;	// IMP=0x001000000001dbd0
- (void)_configureBulletinView:(id)arg1 forBulletin:(id)arg2;	// IMP=0x001000000001d220
- (id)_volumeBulletinView;	// IMP=0x001000000001d180
- (id)_informationalBulletinView;	// IMP=0x001000000001d0e0
- (void)didEndAnimatingOutBulletinView:(id)arg1;	// IMP=0x001000000001cfb0
- (void)updateBulletinView:(id)arg1 forBulletin:(id)arg2;	// IMP=0x001000000001cee0
- (id)bulletinViewForBulletin:(id)arg1;	// IMP=0x001000000001cc80

@end

