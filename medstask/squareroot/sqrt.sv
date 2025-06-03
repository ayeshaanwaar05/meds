`timescale 1ns/10ps
module sqrt (
    input  real input_value,
    output real result
);
    always_comb begin
        result = squareroot(input_value);
    end
endmodule
function real squareroot(input real val);
    real x, tolerance;
    begin
        if (val < 0.0) begin
            $display("Error: Negative input");
            return 0.0;
        end
        if (val == 0.0)
            return 0.0;

        if (val >= 1.0)
            x = val / 2.0;
        else
            x = 1.0;  
        tolerance = 1e-8;
        while (abs(x * x - val) > tolerance) begin
            x = 0.5 * (x + val / x);
        end
        return x;
    end
endfunction

function real  abs(input real r);
    begin
        return (r < 0.0) ? -r : r;
    end
endfunction
