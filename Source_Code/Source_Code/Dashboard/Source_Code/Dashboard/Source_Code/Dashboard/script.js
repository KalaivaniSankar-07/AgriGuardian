console.log("AgriGuardian Dashboard Loaded");

const soilMoisture = 42;
const temperature = 29;
const humidity = 68;
const rainfallDetected = false;

function getIrrigationRecommendation() {
    if (soilMoisture < 35 && !rainfallDetected) {
        return "Irrigation Recommended";
    }

    return "No Irrigation Required";
}

console.log("Soil Moisture:", soilMoisture + "%");
console.log("Temperature:", temperature + "°C");
console.log("Humidity:", humidity + "%");
console.log("Recommendation:", getIrrigationRecommendation());
