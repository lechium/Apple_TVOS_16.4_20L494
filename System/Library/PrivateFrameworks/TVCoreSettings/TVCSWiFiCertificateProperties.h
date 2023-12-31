//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TVCSWiFiCertificateProperties : NSObject
{
    NSArray *_sections;	// 8 = 0x8
    NSArray *_sectionTitles;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001534f
@property(retain, nonatomic) NSArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (id)_sendablePropertiesFromTrust:(struct __SecTrust *)arg1;	// IMP=0x0000000000015134
- (id)_copyPropertiesFromTrust:(struct __SecTrust *)arg1;	// IMP=0x00000000000150a1
- (id)_sendablePropertiesFromProperties:(id)arg1;	// IMP=0x0000000000014ebf
- (id)_sendablePropertyFromProperty:(id)arg1;	// IMP=0x0000000000014d00
- (id)_sectionsFromProperties:(id)arg1;	// IMP=0x00000000000149cb
- (id)_sectionInfoForCertSection:(id)arg1 title:(id)arg2;	// IMP=0x0000000000014923
- (id)_cellInfosForSection:(id)arg1;	// IMP=0x000000000001454e
- (void)_setup:(id)arg1;	// IMP=0x00000000000140ca
- (id)initWithCertificate:(struct __SecCertificate *)arg1;	// IMP=0x0000000000013fec

@end

