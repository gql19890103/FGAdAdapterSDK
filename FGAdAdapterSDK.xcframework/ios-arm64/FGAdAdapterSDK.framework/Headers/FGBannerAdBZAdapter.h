//
//  FGBannerAdBZAdapter.h
//  FGAdAdapterSDK
//
//  Created by Amy on 2025/8/8.
//

#import <Foundation/Foundation.h>
#import <AMPSAdSDK/AMPSAdSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface FGBannerAdBZAdapter : NSObject <AMPSCustomBannerProtocol>

@property (nonatomic, weak, nullable) id<AMPSCustomBannerAdapterDelegate> customDelegate;

@property (nonatomic, weak, nullable) id<AMPSCustomBiddingDelegate> bidDelegate;

@property (nonatomic, assign) BOOL isLoadAdSuccess;

@property (nonatomic, strong) id adapterModel;

@property (nonatomic, copy) NSString *appId;

@property (nonatomic, strong) AMPSAdSDKConfiguration *sdkConfiguration;

/**
 Nonnull, must
 */
@property (nonatomic, weak) UIViewController *viewController;

/**
 bannerView
 */
@property (nonatomic, strong) UIView *bannerView;

@end

NS_ASSUME_NONNULL_END
