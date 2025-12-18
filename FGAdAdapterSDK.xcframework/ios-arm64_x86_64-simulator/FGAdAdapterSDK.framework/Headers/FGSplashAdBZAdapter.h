//
//  FGSplashAdBZAdapter.h
//  FGAdAdapterSDK
//
//  Created by Amy on 2025/8/8.
//

#import <Foundation/Foundation.h>
#import <AMPSAdSDK/AMPSAdSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface FGSplashAdBZAdapter : NSObject <AMPSCustomSplashProtocol>

@property (nonatomic, weak, nullable) id<AMPSCustomSplashAdapterDelegate> customDelegate;

@property (nonatomic, weak, nullable) id<AMPSCustomBiddingDelegate> bidDelegate;

@property (nonatomic, assign) BOOL isLoadAdSuccess;

@property (nonatomic, strong) id adapterModel;

@property (nonatomic, copy) NSString *appId;

@property (nonatomic, strong) AMPSAdSDKConfiguration *sdkConfiguration;

@property (nonatomic, assign) BOOL isZoomOutAd;

@end

NS_ASSUME_NONNULL_END
